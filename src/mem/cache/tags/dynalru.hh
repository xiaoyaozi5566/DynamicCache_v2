// This file implements dynamic cache

#include "mem/cache/tags/lru.hh"
#include "stdio.h"

class DYNALRU : public LRU{
private:
		unsigned L_assoc;
		unsigned H_assoc;
		unsigned assoc;
		unsigned H_min;

    public:
    DYNALRU( unsigned _numSets, unsigned _blkSize, unsigned _assoc,
            unsigned _hit_latency, unsigned _L_assoc, unsigned _H_min);
	
	virtual void reset_umon();
	virtual unsigned curr_L_assoc();
	virtual unsigned lookup_umon(int index);
	virtual unsigned lookup_umon(int index, uint64_t tid) {return 0;};
	virtual unsigned lookup_misses(uint64_t tid);
	virtual unsigned inc_size();
	virtual unsigned dec_size();
	virtual unsigned inc_size(uint64_t tid0, uint64_t tid1) {return 0;};
	virtual unsigned dec_size(uint64_t tid0, uint64_t tid1) {return 0;};
	virtual BlkType* get_evictBlk(unsigned tcid, unsigned index);
	
	virtual BlkType* accessBlock(Addr addr, int &lat, int master_id, uint64_t tid);

	virtual BlkType* findBlock(Addr addr, uint64_t tid);
	virtual void invalidateBlk(BlkType *blk, uint64_t tid);
    virtual int assoc_of_tc( int tcid );
	
	protected:
    CacheSet **sets;
	CacheSet *umon_set;
	BlkType *umon_blks;
	unsigned *umon_counters;
	unsigned miss_counter;
    virtual void init_sets();
    virtual CacheSet get_set( int setnum, uint64_t tid, Addr addr );
    // virtual void cleanupRefs();

};
