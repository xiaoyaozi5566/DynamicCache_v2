#include "mem/cache/tags/dynalru.hh"
#include "base/intmath.hh"
#include "debug/CacheRepl.hh"
#include "mem/cache/tags/cacheset.hh"
#include "mem/cache/tags/lru.hh"
#include "mem/cache/base.hh"
#include "sim/core.hh"
#include "mem/cache/blk.hh"
#include <typeinfo>

DYNALRU::DYNALRU( unsigned _numSets,
        unsigned _blkSize,
        unsigned _assoc,
        unsigned _hit_latency,
		unsigned _L_assoc,
		unsigned _H_min)
    : LRU(_numSets, _blkSize, _assoc, _hit_latency )
{
	L_assoc = _L_assoc;
	H_min = _H_min;
	H_assoc = _assoc - L_assoc;
	assoc = _assoc;
	// umon counters
	umon_counters = new unsigned[assoc];
	miss_counter = 0;
	reset_umon();
	init_sets();
}

void DYNALRU::reset_umon()
{
	miss_counter = miss_counter/2;
	for (unsigned i = 0; i < assoc; i++) 
		umon_counters[i] = umon_counters[i]/2;
}

unsigned DYNALRU::curr_L_assoc()
{
	return L_assoc;
}

unsigned DYNALRU::lookup_umon(int index)
{
	return umon_counters[index];
}

unsigned DYNALRU::lookup_misses()
{
	return miss_counter;
}
// label: 0->L, 1->H
CacheSet
DYNALRU::get_set( int setnum, uint64_t label, Addr addr ){
    CacheSet s = sets[label][setnum];
    return s;
}

int
DYNALRU::assoc_of_tc( int tcid ){
    if (tcid == 0) return L_assoc;
	else return H_assoc;
}

void
DYNALRU::init_sets(){
    sets = new CacheSet*[2];
    for( int i=0; i< 2; i++ ){ sets[i] = new CacheSet[numSets]; }

    numBlocks = numSets * assoc;
    blks = new BlkType[numBlocks];
    dataBlks = new uint8_t[numBlocks * blkSize];

    unsigned blkIndex = 0;
    for( unsigned tc=0; tc< 2; tc++ ){
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
	blkIndex = 0;
	umon_set = new CacheSet[numSets];
	umon_blks = new BlkType[numBlocks];
	for( unsigned i = 0; i < numSets; i++){
		umon_set[i].assoc = assoc;
		umon_set[i].blks = new BlkType*[assoc];
        for( unsigned j = 0; j<assoc; j++ ){
            BlkType *blk = &umon_blks[blkIndex];
            blk->data = 0;
            ++blkIndex;

            blk->status = 0;
            blk->tag = j;
            blk->whenReady = 0;
            blk->isTouched = false;
            blk->size = blkSize;
            blk->set = i;
			// initialize the threadID
			blk->threadID = 0;
            umon_set[i].blks[j]=blk;
        }
	}
}

// increase the size of Low partition
unsigned
DYNALRU::inc_size(){
	if(H_assoc == H_min) return 0;
	
	L_assoc += 1;
	H_assoc -= 1;
	
	fprintf(stderr, "L_assoc = %2d H_assoc = %2d\n", L_assoc, H_assoc);
	
	for( unsigned i = 0; i < numSets; i++){
		// increase the size of L partition
		sets[0][i].assoc = L_assoc;
		CacheBlk **tempBlks = sets[0][i].blks;
		sets[0][i].blks = new BlkType*[L_assoc];
		// copy the original cache blocks
		for( unsigned j = 0; j<L_assoc-1; j++){
			sets[0][i].blks[j] = tempBlks[j];
		}
		// append the new blk from High partition
		sets[0][i].blks[L_assoc-1] = sets[1][i].blks[H_assoc];
		// mark as dirty to hide the "dirty" bit
		// sets[0][i].blks[L_assoc-1]->status |= BlkDirty;
		
		// decrease the size of H partition
		sets[1][i].assoc = H_assoc;
		tempBlks = sets[1][i].blks;
		sets[1][i].blks = new BlkType*[H_assoc];
		// remove one block from High partition
		for( unsigned j = 0; j<H_assoc; j++){
			sets[1][i].blks[j] = tempBlks[j];
		}
	}
	return numSets;
}

unsigned 
DYNALRU::dec_size(){
	if(L_assoc == 1) return 0;
	
	L_assoc -= 1;
	H_assoc += 1;
	
	fprintf(stderr, "L_assoc = %2d H_assoc = %2d\n", L_assoc, H_assoc);
	
	for( unsigned i = 0; i < numSets; i++){
		// increase the size of H partition
		sets[1][i].assoc = H_assoc;
		CacheBlk **tempBlks = sets[1][i].blks;
		sets[1][i].blks = new BlkType*[H_assoc];
		// copy the original blocks
		for( unsigned j = 0; j<H_assoc-1; j++){
			sets[1][i].blks[j] = tempBlks[j];
		}
		// append the new blk from Low partition
		sets[1][i].blks[H_assoc-1] = sets[0][i].blks[L_assoc];
		
		// decrease the size of L partition
		sets[0][i].assoc = L_assoc;
		tempBlks = sets[0][i].blks;
		sets[0][i].blks = new BlkType*[L_assoc];
		// remove one block from Low partition
		for( unsigned j = 0; j<L_assoc; j++){
			sets[0][i].blks[j] = tempBlks[j];
		}
	}
	return numSets;
}

DYNALRU::BlkType*
DYNALRU::get_evictBlk(unsigned tcid, unsigned index){
	// increase the low partition
	if(tcid == 0)
		return sets[0][index].blks[L_assoc-1];
	// decrease the low partition
	else
		return sets[1][index].blks[H_assoc-1];
}

DYNALRU::BlkType*
DYNALRU::accessBlock(Addr addr, int &lat, int master_id, uint64_t tid)
{
    Addr tag = extractTag(addr);
    unsigned set = extractSet(addr);
    // BlkType *blk = sets[set].findBlk(tag);
    BlkType *blk;
	bool inLow = false;
	if(tid == 0) blk = get_set(set,tid,addr).findBlk(tag);
	else{
		blk = get_set(set,1,addr).findBlk(tag);
		if (blk == 0) {
			blk = get_set(set, 0, addr).findBlk(tag);
			inLow = true;
		}
	}
    lat = hitLatency;
    if (blk != 0 ) {
        // move this block to head of the MRU list
        if (!inLow) get_set(set,tid,addr).moveToHead(blk);
        DPRINTF(CacheRepl, "set %x: moving blk %x to MRU\n",
                set, regenerateBlkAddr(tag, set));
        if (blk->whenReady > curTick()
            && blk->whenReady - curTick() > hitLatency) {
            lat = blk->whenReady - curTick();
        }
        blk->refCount += 1;
		// set the used bit
		blk->isTouched = 1;
    }
	else{
		// total misses for low security domain
		if (tid == 0) miss_counter++;
	}
	
	if (tid == 0)
	{
		BlkType *umon_blk = umon_set[set].findBlk(tag);
		unsigned index = umon_set[set].findBlkIndex(tag);
		// cache hit on umon tags
		if (umon_blk != 0) {
			umon_counters[index]++;
			umon_set[set].moveToHead(umon_blk);
		}
		// cache miss on umon tags
		else {
			umon_set[set].blks[assoc-1]->tag = tag;
			umon_set[set].blks[assoc-1]->status = BlkValid | BlkReadable;
			umon_set[set].moveToHead(umon_set[set].blks[assoc-1]);
		}
	}
	
    return blk;
}

DYNALRU::BlkType*
DYNALRU::findBlock(Addr addr, uint64_t tid)
{
    Addr tag = extractTag(addr);
    unsigned set = extractSet(addr);
    BlkType *blk;
	// Low access only accesses the Low partition
	if(tid == 0) blk = get_set(set,0,addr).findBlk(tag);
	// High access accesses both Low and High partitions
	else{
		blk = get_set(set,1,addr).findBlk(tag);
		if (blk == 0) {
			blk = get_set(set, 0, addr).findBlk(tag);
		}
	}
    return blk;
}

void
DYNALRU::invalidateBlk(BlkType *blk, uint64_t tid)
{
    if (blk) {
        if (blk->isValid()) {
            tagsInUse--;
            assert(blk->srcMasterId < cache->system->maxMasters());
            occupancies[blk->srcMasterId]--;
            blk->srcMasterId = Request::invldMasterId;
            unsigned set = blk->set;
			BlkType *tempBlock = get_set(set,tid,0).findBlk(blk->tag);
            if(tempBlock != 0) get_set(set,tid,blk->set).moveToTail(blk);
        }
        blk->status = 0;
        blk->isTouched = false;
        blk->clearLoadLocks();

        // should be evicted before valid blocks
        //unsigned set = blk->set;
        //sets[set].moveToTail(blk);
    }
	
	if (tid == 0){
		BlkType *umon_blk = umon_set[blk->set].findBlk(blk->tag);
		if (umon_blk != 0) {
			if (umon_blk->isValid()) {
				umon_set[blk->set].moveToTail(umon_blk);
			}
			umon_blk->status = 0;
			blk->isTouched = false;
		}
	}
}