#ifndef __PARAMS__Bridge__
#define __PARAMS__Bridge__

class Bridge;

#include <cstddef>
#include "base/types.hh"
#include <vector>
#include "base/types.hh"
#include "base/range.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/MemObject.hh"

struct BridgeParams
    : public MemObjectParams
{
    Bridge * create();
    Tick delay;
    std::vector< Range< Addr > > ranges;
    int resp_size;
    int req_size;
    unsigned int port_master_connection_count;
    unsigned int port_slave_connection_count;
};

#endif // __PARAMS__Bridge__
