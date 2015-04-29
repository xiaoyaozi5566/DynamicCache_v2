#include "mem/cache/base.hh"
#include "mem/cache/blk.hh"
#include "mem/cache/cache.hh"
#include "params/BaseCache.hh"
#include "stdio.h"

typedef BaseCacheParams Params;
template <class TagStore>
class DynamicCache : public Cache<TagStore>
{
    public:
    DynamicCache( const Params *p, TagStore *tags );
    /** Define the type of cache block to use. */
    typedef typename TagStore::BlkType BlkType;
    /** A typedef for a list of BlkType pointers. */
    typedef typename TagStore::BlkList BlkList;
	
protected:	
	void adjustPartition();
	
	void inc_size();
	void dec_size();
	
	EventWrapper<DynamicCache<TagStore>, &DynamicCache<TagStore>::adjustPartition> adjustEvent;
	
private:
	// Time interval to change partition size (ticks)
	uint64_t interval;
	// Thresholds for changing partition size
	float th_inc, th_dec;
	// Static miss curve
	unsigned assoc;
};
