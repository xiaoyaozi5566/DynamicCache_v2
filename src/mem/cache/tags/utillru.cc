#include "mem/cache/tags/UTILLRU.hh"
#include "base/intmath.hh"
#include "debug/CacheRepl.hh"
#include "mem/cache/tags/cacheset.hh"
#include "mem/cache/tags/lru.hh"
#include "mem/cache/base.hh"
#include "sim/core.hh"
#include "mem/cache/blk.hh"
#include <typeinfo>

UTILLRU::UTILLRU( unsigned _numSets,
        unsigned _blkSize,
        unsigned _assoc,
        unsigned _hit_latency,
		unsigned _L_assoc)
    : LRU(_numSets, _blkSize, _assoc, _hit_latency )
{
	L_assoc = _L_assoc;
	H_assoc = _assoc - L_assoc;
	assoc = _assoc;
	// umon counters
	umon_counters = new unsigned*[2];
	for (unsigned i = 0; i < 2; i++)
		umon_counters[i] = new unsigned[assoc];
	
	for (unsigned i = 0; i < 2; i++)
		for (unsigned j = 0; j < assoc; j++) 
			umon_counters[i][j] = 0;
	
	init_sets();
}

void UTILLRU::reset_umon()
{
	for (unsigned i = 0; i < 2; i++)
		for (unsigned j = 0; j < assoc; j++) 
			umon_counters[i][j] = umon_counters[i][j]/2;
}

unsigned UTILLRU::curr_L_assoc()
{
	return L_assoc;
}

unsigned UTILLRU::lookup_umon(int index, uint64_t tid)
{
	return umon_counters[tid][index];
}

int
UTILLRU::assoc_of_tc( int tcid ){
    if (tcid == 0) return L_assoc;
	else return H_assoc;
}

CacheSet
UTILLRU::get_set( int setnum, uint64_t tid, Addr addr ){
    return sets[setnum];
}

void
UTILLRU::init_sets(){
    sets = new CacheSet[numSets];

    numBlocks = numSets * assoc;
    blks = new BlkType[numBlocks];
    dataBlks = new uint8_t[numBlocks * blkSize];

    unsigned blkIndex = 0;
    for( unsigned i = 0; i< numSets; i++ ){
        sets[i].assoc = assoc;
        sets[i].blks = new BlkType*[assoc];
        for( unsigned j = 0; j<assoc; j++ ){
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
			blk->threadID = 0;
            sets[i].blks[j]=blk;
        }
    }
	
	// shadow tags for monitoring
	umon_sets = new CacheSet*[2];
	for( int i=0; i< 2; i++ ){ umon_sets[i] = new CacheSet[numSets]; }
	umon_blks = new BlkType*[2];
	for( int i=0; i< 2; i++ ){ umon_blks[i] = new BlkType[numBlocks]; }
	
	for( unsigned tc=0; tc<2; tc++ ){
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
UTILLRU::inc_size(){
	if(H_assoc == 1) return 0;
	
	L_assoc += 1;
	H_assoc -= 1;
	
	fprintf(stderr, "L_assoc = %2d H_assoc = %2d\n", L_assoc, H_assoc);
	
	return numSets;
}

unsigned 
UTILLRU::dec_size(){
	if(L_assoc == 1) return 0;
	
	L_assoc -= 1;
	H_assoc += 1;
	
	fprintf(stderr, "L_assoc = %2d H_assoc = %2d\n", L_assoc, H_assoc);
	
	return numSets;
}

UTILLRU::BlkType*
UTILLRU::accessBlock(Addr addr, int &lat, int master_id, uint64_t tid)
{
    Addr tag = extractTag(addr);
    unsigned set = extractSet(addr);
    // BlkType *blk = sets[set].findBlk(tag);
    BlkType *blk = get_set(set,tid,addr).findBlk(tag);
    lat = hitLatency;
    if (blk != 0 ) {
        // move this block to head of the MRU list
        get_set(set,tid,addr).moveToHead(blk);
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
	
	BlkType *umon_blk = umon_sets[tid][set].findBlk(tag);
	unsigned index = umon_sets[tid][set].findBlkIndex(tag);
	// cache hit on umon tags
	if (umon_blk != 0) {
		umon_counters[index]++;
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

UTILLRU::BlkType*
UTILLRU::findBlock(Addr addr, uint64_t tid)
{
    Addr tag = extractTag(addr);
    unsigned set = extractSet(addr);
    BlkType *blk = get_set(set,tid,addr).findBlk(tag);
    return blk;
}

UTILLRU::BlkType*
UTILLRU::findVictim(Addr addr, PacketList &writebacks, uint64_t tid)
{
    unsigned set = extractSet(addr);
    // grab a replacement candidate
    BlkType *blk = get_set(set,tid,addr).findVictim(tid, L_assoc);

    if (blk->isValid()) {
        DPRINTF(CacheRepl, "set %x: selecting blk %x for replacement\n",
                set, regenerateBlkAddr(blk->tag, set));
    }
    return blk;
}

void
UTILLRU::invalidateBlk(BlkType *blk, uint64_t tid)
{
    if (blk) {
        if (blk->isValid()) {
            tagsInUse--;
            assert(blk->srcMasterId < cache->system->maxMasters());
            occupancies[blk->srcMasterId]--;
            blk->srcMasterId = Request::invldMasterId;
            unsigned set = blk->set;
			get_set(set,tid,blk->set).moveToTail(blk);
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