#include "mem/cache/tags/dialru.hh"
#include "base/intmath.hh"
#include "debug/CacheRepl.hh"
#include "mem/cache/tags/cacheset.hh"
#include "mem/cache/tags/lru.hh"
#include "mem/cache/base.hh"
#include "sim/core.hh"
#include "mem/cache/blk.hh"
#include <typeinfo>

DIALRU::DIALRU( unsigned _numSets,
        unsigned _blkSize,
        unsigned _assoc,
        unsigned _hit_latency,
		unsigned _num_tcs,
        unsigned _low_assoc)
    : LRU(_numSets, _blkSize, _assoc, _hit_latency )
{
	assoc = _assoc - _low_assoc;
	num_tcs = _num_tcs;
	per_assoc = new unsigned[num_tcs];
    per_assoc[0] = _low_assoc;
	for (unsigned i = 1; i < num_tcs; i++)
		per_assoc[i] = assoc/(num_tcs-1);
	// umon counters
	umon_counters = new unsigned*[num_tcs];
	for (unsigned i = 0; i < num_tcs; i++)
		umon_counters[i] = new unsigned[assoc];

	for (unsigned i = 0; i < num_tcs; i++)
		for (unsigned j = 0; j < assoc; j++) 
			umon_counters[i][j] = 0;
	
	miss_counter = new unsigned[num_tcs];
	for (unsigned i = 0; i < num_tcs; i++)
		miss_counter[i] = 0;
	
	init_sets();
}

void DIALRU::reset_umon()
{
	for (unsigned i = 0; i < num_tcs; i++)
		miss_counter[i] = miss_counter[i]/2;
	for (unsigned i = 0; i < num_tcs; i++)
		for (unsigned j = 0; j < assoc; j++) 
			umon_counters[i][j] = umon_counters[i][j]/2;
}

unsigned DIALRU::curr_L_assoc()
{
	return 0;
}

unsigned DIALRU::lookup_umon(int index, uint64_t tid)
{
	return umon_counters[tid][index];
}

unsigned DIALRU::lookup_misses(uint64_t tid)
{
	return miss_counter[tid];
}

// label: 0->L, 1->H
CacheSet
DIALRU::get_set( int setnum, uint64_t label, Addr addr ){
    CacheSet s = sets[label][setnum];
    return s;
}

int
DIALRU::assoc_of_tc( int tcid ){
    return per_assoc[tcid];
}

void
DIALRU::init_sets(){
    sets = new CacheSet*[num_tcs];
    for( int i=0; i< num_tcs; i++ ){ sets[i] = new CacheSet[numSets]; }

    numBlocks = numSets * assoc;
    blks = new BlkType[numBlocks];
    dataBlks = new uint8_t[numBlocks * blkSize];

    unsigned blkIndex = 0;
    for( unsigned tc=0; tc< num_tcs; tc++ ){
        for( unsigned i = 0; i< numSets; i++ ){
            int tc_assoc = assoc_of_tc(tc);
            sets[tc][i].assoc = tc_assoc;
            sets[tc][i].blks  = new BlkType*[tc_assoc];
            for( unsigned j = 0; j<tc_assoc; j++ ){
                BlkType *blk = &blks[blkIndex];
                blk->data = &dataBlks[blkSize*blkIndex];
                ++blkIndex;

                blk->status = 0;
                blk->tag = j;
                blk->whenReady = 0;
                blk->isTouched = false;
                blk->size = blkSize;
                blk->set = i;
				// initialize the threadID
				blk->threadID = tc;
                sets[tc][i].blks[j]=blk;
            }
        }
    }
	
	// shadow tags for monitoring
	umon_sets = new CacheSet*[num_tcs];
	for( int i=0; i< num_tcs; i++ ){ umon_sets[i] = new CacheSet[numSets]; }
	umon_blks = new BlkType*[num_tcs];
	for( int i=0; i< num_tcs; i++ ){ umon_blks[i] = new BlkType[numBlocks]; }
	
	for( unsigned tc=0; tc<num_tcs; tc++ ){
		blkIndex = 0;
		for( unsigned i = 0; i < numSets; i++){
			umon_sets[tc][i].assoc = assoc;
			umon_sets[tc][i].blks = new BlkType*[assoc];
	        for( unsigned j = 0; j<assoc; j++ ){
	            BlkType *blk = &umon_blks[tc][blkIndex];
	            blk->data = 0;
	            ++blkIndex;

	            blk->status = 0;
	            blk->tag = j;
	            blk->whenReady = 0;
	            blk->isTouched = false;
	            blk->size = blkSize;
	            blk->set = i;
				// initialize the threadID
				blk->threadID = tc;
	            umon_sets[tc][i].blks[j]=blk;
	        }
		}
	}
}

// increase the size of Low partition
unsigned
DIALRU::inc_size(uint64_t tid0, uint64_t tid1){

	per_assoc[tid0] += 1;
	per_assoc[tid1] -= 1;
	
	fprintf(stderr, "assoc: %d %d %d %d\n", per_assoc[0], per_assoc[1], per_assoc[2], per_assoc[3]);
	
	for( unsigned i = 0; i < numSets; i++){
		// increase the size of L partition
		sets[tid0][i].assoc = per_assoc[tid0];
		CacheBlk **tempBlks = sets[tid0][i].blks;
		sets[tid0][i].blks = new BlkType*[per_assoc[tid0]];
		// copy the original cache blocks
		for( unsigned j = 0; j<per_assoc[tid0]-1; j++){
			sets[tid0][i].blks[j] = tempBlks[j];
		}
		// append the new blk from High partition
		sets[tid0][i].blks[per_assoc[tid0]-1] = sets[tid1][i].blks[per_assoc[tid1]];
		// mark as dirty to hide the "dirty" bit
		// sets[0][i].blks[L_assoc-1]->status |= BlkDirty;
		
		// decrease the size of H partition
		sets[tid1][i].assoc = per_assoc[tid1];
		tempBlks = sets[tid1][i].blks;
		sets[tid1][i].blks = new BlkType*[per_assoc[tid1]];
		// remove one block from High partition
		for( unsigned j = 0; j<per_assoc[tid1]; j++){
			sets[tid1][i].blks[j] = tempBlks[j];
		}
	}
	return numSets;
}

unsigned 
DIALRU::dec_size(uint64_t tid0, uint64_t tid1){
	
	per_assoc[tid0] -= 1;
	per_assoc[tid1] += 1;
	
	fprintf(stderr, "assoc: %d %d %d %d\n", per_assoc[0], per_assoc[1], per_assoc[2], per_assoc[3]);
	
	for( unsigned i = 0; i < numSets; i++){
		// increase the size of H partition
		sets[tid1][i].assoc = per_assoc[tid1];
		CacheBlk **tempBlks = sets[tid1][i].blks;
		sets[tid1][i].blks = new BlkType*[per_assoc[tid1]];
		// copy the original blocks
		for( unsigned j = 0; j<per_assoc[tid1]-1; j++){
			sets[tid1][i].blks[j] = tempBlks[j];
		}
		// append the new blk from Low partition
		sets[tid1][i].blks[per_assoc[tid1]-1] = sets[tid0][i].blks[per_assoc[tid0]];
		
		// decrease the size of L partition
		sets[tid0][i].assoc = per_assoc[tid0];
		tempBlks = sets[tid0][i].blks;
		sets[tid0][i].blks = new BlkType*[per_assoc[tid0]];
		// remove one block from Low partition
		for( unsigned j = 0; j<per_assoc[tid0]; j++){
			sets[tid0][i].blks[j] = tempBlks[j];
		}
	}
	return numSets;
}

DIALRU::BlkType*
DIALRU::get_evictBlk(unsigned tcid, unsigned index){
	return sets[tcid][index].blks[per_assoc[tcid]-1];
}

DIALRU::BlkType*
DIALRU::accessBlock(Addr addr, int &lat, int master_id, uint64_t tid)
{
    Addr tag = extractTag(addr);
    unsigned set = extractSet(addr);
    // BlkType *blk = sets[set].findBlk(tag);
    BlkType *blk;
	bool inOwn = false;
	unsigned i = 0;
	blk = get_set(set,tid,addr).findBlk(tag);
	if (blk != 0) inOwn = true;
	else
	{
		for (i = 0; i<num_tcs; i++)
		{
			blk = get_set(set,i,addr).findBlk(tag);
			if (blk != 0) break;
		}
	}
    lat = hitLatency;
    if (blk != 0 ) {
        DPRINTF(CacheRepl, "set %x: moving blk %x to MRU\n",
                set, regenerateBlkAddr(tag, set));
        if (blk->whenReady > curTick()
            && blk->whenReady - curTick() > hitLatency) {
            lat = blk->whenReady - curTick();
        }
        blk->refCount += 1;
		// set the used bit
		blk->isTouched = 1;
        // move this block to head of the MRU list
        if (inOwn) get_set(set,tid,addr).moveToHead(blk);
		// else {
		// 	BlkType *tmpBlk;
		// 	tmpBlk = blk;
		// 	blk = get_set(set,tid,addr).blks[per_assoc[tid]-1];
		// 	get_set(set,tid,addr).blks[per_assoc[tid]-1] = tmpBlk;
		// 	get_set(set,tid,addr).moveToHead(tmpBlk);
		// 	unsigned index = get_set(set,i,addr).findBlkIndex(tag);
		// 	get_set(set,i,addr).blks[index] = blk;
		// }
    }
	else
		miss_counter[tid]++;
	
	BlkType *umon_blk = umon_sets[tid][set].findBlk(tag);
	unsigned index = umon_sets[tid][set].findBlkIndex(tag);
	// cache hit on umon tags
	if (umon_blk != 0) {
		umon_counters[tid][index]++;
		umon_sets[tid][set].moveToHead(umon_blk);
	}
	// cache miss on umon tags
	else {
		umon_sets[tid][set].blks[assoc-1]->tag = tag;
		umon_sets[tid][set].blks[assoc-1]->status = BlkValid | BlkReadable;
		umon_sets[tid][set].moveToHead(umon_sets[tid][set].blks[assoc-1]);
	}
	
    return blk;
}

DIALRU::BlkType*
DIALRU::findBlock(Addr addr, uint64_t tid)
{
    Addr tag = extractTag(addr);
    unsigned set = extractSet(addr);
    BlkType *blk;
	blk = get_set(set,tid,addr).findBlk(tag);
	if (blk == 0)
	{
		for (unsigned i = 0; i<num_tcs; i++)
		{
			blk = get_set(set,i,addr).findBlk(tag);
			if (blk != 0) break;
		}
	}
	
    return blk;
}

void
DIALRU::invalidateBlk(BlkType *blk, uint64_t tid)
{
    if (blk) {
        if (blk->isValid()) {
            tagsInUse--;
            assert(blk->srcMasterId < cache->system->maxMasters());
            occupancies[blk->srcMasterId]--;
            blk->srcMasterId = Request::invldMasterId;
            unsigned set = blk->set;
		    BlkType *tempBlock = get_set(set,tid,0).findBlk(blk->tag);
			if (tempBlock != 0) get_set(set,tid,0).moveToTail(blk);
        }
        blk->status = 0;
        blk->isTouched = false;
        blk->clearLoadLocks();

        // should be evicted before valid blocks
        //unsigned set = blk->set;
        //sets[set].moveToTail(blk);
    }
	
	BlkType *umon_blk = umon_sets[tid][blk->set].findBlk(blk->tag);
	if (umon_blk != 0) {
		if (umon_blk->isValid()) {
			umon_sets[tid][blk->set].moveToTail(umon_blk);
		}
		umon_blk->status = 0;
		umon_blk->isTouched = false;
	}
}