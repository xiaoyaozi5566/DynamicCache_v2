/*
 * Copyright (c) 2004-2005 The Regents of The University of Michigan
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met: redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer;
 * redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution;
 * neither the name of the copyright holders nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Authors: Erik Hallnor
 *          Steve Reinhardt
 *          Lisa Hsu
 *          Kevin Lim
 */

/**
 * @file
 * Cache template instantiations.
 */

#include "mem/config/cache.hh"

#if defined(USE_CACHE_LRU)
#include "mem/cache/tags/lru.hh"
#endif

#if defined(USE_CACHE_DYNALRU)
#include "mem/cache/tags/dynalru.hh"
#endif

#if defined(USE_CACHE_FALRU)
#include "mem/cache/tags/fa_lru.hh"
#endif

#if defined(USE_CACHE_IIC)
#include "mem/cache/tags/iic.hh"
#endif

#if defined(USE_CACHE_UTIL)
#include "mem/cache/tags/utillru.hh"
#endif

#if defined(USE_CACHE_LATT)
#include "mem/cache/tags/lattlru.hh"
#endif

#if defined(USE_CACHE_DIA)
#include "mem/cache/tags/dialru.hh"
#endif

#include "mem/cache/cache_impl.hh"

// Template Instantiations
#ifndef DOXYGEN_SHOULD_SKIP_THIS


#if defined(USE_CACHE_FALRU)
template class Cache<FALRU>;
template class DynamicCache<FALRU>;
template class UtilityCache<FALRU>;
#endif

#if defined(USE_CACHE_IIC)
template class Cache<IIC>;
template class DynamicCache<IIC>;
template class UtilityCache<IIC>;
#endif

#if defined(USE_CACHE_LRU)
template class Cache<LRU>;
template class DynamicCache<LRU>;
template class UtilityCache<LRU>;
template class LatticeCache<LRU>;
template class DiamondCache<LRU>;
#endif

#if defined(USE_CACHE_DYNALRU)
template class Cache<DYNALRU>;
template class DynamicCache<DYNALRU>;
template class UtilityCache<DYNALRU>;
template class LatticeCache<DYNALRU>;
template class DiamondCache<DYNALRU>;
#endif

#if defined(USE_CACHE_UTIL)
template class Cache<UTILLRU>;
template class DynamicCache<UTILLRU>;
template class UtilityCache<UTILLRU>;
template class LatticeCache<UTILLRU>;
template class DiamondCache<UTILLRU>;
#endif

#if defined(USE_CACHE_LATT)
template class Cache<LATTLRU>;
template class DynamicCache<LATTLRU>;
template class UtilityCache<LATTLRU>;
template class LatticeCache<LATTLRU>;
template class DiamondCache<LATTLRU>;
#endif

#if defined(USE_CACHE_DIA)
template class Cache<DIALRU>;
template class DynamicCache<DIALRU>;
template class UtilityCache<DIALRU>;
template class LatticeCache<DIALRU>;
template class DiamondCache<DIALRU>;
#endif

#endif //DOXYGEN_SHOULD_SKIP_THIS
