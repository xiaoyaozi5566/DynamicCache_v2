# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.3
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

from sys import version_info
if version_info >= (2,6,0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_param_DerivO3CPU', [dirname(__file__)])
        except ImportError:
            import _param_DerivO3CPU
            return _param_DerivO3CPU
        if fp is not None:
            try:
                _mod = imp.load_module('_param_DerivO3CPU', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _param_DerivO3CPU = swig_import_helper()
    del swig_import_helper
else:
    import _param_DerivO3CPU
del version_info
try:
    _swig_property = property
except NameError:
    pass # Python < 2.2 doesn't have 'property'.
def _swig_setattr_nondynamic(self,class_type,name,value,static=1):
    if (name == "thisown"): return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name,None)
    if method: return method(self,value)
    if (not static) or hasattr(self,name):
        self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)

def _swig_setattr(self,class_type,name,value):
    return _swig_setattr_nondynamic(self,class_type,name,value,0)

def _swig_getattr(self,class_type,name):
    if (name == "thisown"): return self.this.own()
    method = class_type.__swig_getmethods__.get(name,None)
    if method: return method(self)
    raise AttributeError(name)

def _swig_repr(self):
    try: strthis = "proxy of " + self.this.__repr__()
    except: strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except AttributeError:
    class _object : pass
    _newclass = 0


def _swig_setattr_nondynamic_method(set):
    def set_attr(self,name,value):
        if (name == "thisown"): return self.this.own(value)
        if hasattr(self,name) or (name == "this"):
            set(self,name,value)
        else:
            raise AttributeError("You cannot add attributes to %s" % self)
    return set_attr


import param_FUPool
import FUDesc_vector
import param_FUDesc
import OpDesc_vector
import param_OpDesc
import enum_OpClass
import param_SimObject
import param_BaseCPU
import param_ArmInterrupts
import param_ArmTLB
import param_ArmTableWalker
import param_System
import enum_MemoryMode
import AbstractMemory_vector
import param_AbstractMemory
import range
import param_MemObject
import param_ClockedObject
import Process_vector
import param_Process
import param_InstTracer
class DerivO3CPU(param_BaseCPU.BaseCPU):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined")
    __repr__ = _swig_repr
DerivO3CPU_swigregister = _param_DerivO3CPU.DerivO3CPU_swigregister
DerivO3CPU_swigregister(DerivO3CPU)

class DerivO3CPUParams(param_BaseCPU.BaseCPUParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def create(self): return _param_DerivO3CPU.DerivO3CPUParams_create(self)
    renameWidth = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_renameWidth_get, _param_DerivO3CPU.DerivO3CPUParams_renameWidth_set)
    smtLSQThreshold = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_smtLSQThreshold_get, _param_DerivO3CPU.DerivO3CPUParams_smtLSQThreshold_set)
    BTBEntries = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_BTBEntries_get, _param_DerivO3CPU.DerivO3CPUParams_BTBEntries_set)
    dispatchWidth = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_dispatchWidth_get, _param_DerivO3CPU.DerivO3CPUParams_dispatchWidth_set)
    iewToRenameDelay = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_iewToRenameDelay_get, _param_DerivO3CPU.DerivO3CPUParams_iewToRenameDelay_set)
    numROBEntries = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_numROBEntries_get, _param_DerivO3CPU.DerivO3CPUParams_numROBEntries_set)
    squashWidth = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_squashWidth_get, _param_DerivO3CPU.DerivO3CPUParams_squashWidth_set)
    renameToROBDelay = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_renameToROBDelay_get, _param_DerivO3CPU.DerivO3CPUParams_renameToROBDelay_set)
    SQEntries = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_SQEntries_get, _param_DerivO3CPU.DerivO3CPUParams_SQEntries_set)
    SSITSize = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_SSITSize_get, _param_DerivO3CPU.DerivO3CPUParams_SSITSize_set)
    fetchWidth = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_fetchWidth_get, _param_DerivO3CPU.DerivO3CPUParams_fetchWidth_set)
    backComSize = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_backComSize_get, _param_DerivO3CPU.DerivO3CPUParams_backComSize_set)
    smtCommitPolicy = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_smtCommitPolicy_get, _param_DerivO3CPU.DerivO3CPUParams_smtCommitPolicy_set)
    commitToIEWDelay = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_commitToIEWDelay_get, _param_DerivO3CPU.DerivO3CPUParams_commitToIEWDelay_set)
    commitToDecodeDelay = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_commitToDecodeDelay_get, _param_DerivO3CPU.DerivO3CPUParams_commitToDecodeDelay_set)
    decodeToRenameDelay = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_decodeToRenameDelay_get, _param_DerivO3CPU.DerivO3CPUParams_decodeToRenameDelay_set)
    fetchToDecodeDelay = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_fetchToDecodeDelay_get, _param_DerivO3CPU.DerivO3CPUParams_fetchToDecodeDelay_set)
    issueWidth = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_issueWidth_get, _param_DerivO3CPU.DerivO3CPUParams_issueWidth_set)
    LSQCheckLoads = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_LSQCheckLoads_get, _param_DerivO3CPU.DerivO3CPUParams_LSQCheckLoads_set)
    globalCtrBits = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_globalCtrBits_get, _param_DerivO3CPU.DerivO3CPUParams_globalCtrBits_set)
    commitToRenameDelay = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_commitToRenameDelay_get, _param_DerivO3CPU.DerivO3CPUParams_commitToRenameDelay_set)
    choicePredictorSize = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_choicePredictorSize_get, _param_DerivO3CPU.DerivO3CPUParams_choicePredictorSize_set)
    cachePorts = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_cachePorts_get, _param_DerivO3CPU.DerivO3CPUParams_cachePorts_set)
    renameToDecodeDelay = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_renameToDecodeDelay_get, _param_DerivO3CPU.DerivO3CPUParams_renameToDecodeDelay_set)
    smtFetchPolicy = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_smtFetchPolicy_get, _param_DerivO3CPU.DerivO3CPUParams_smtFetchPolicy_set)
    store_set_clear_period = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_store_set_clear_period_get, _param_DerivO3CPU.DerivO3CPUParams_store_set_clear_period_set)
    numPhysFloatRegs = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_numPhysFloatRegs_get, _param_DerivO3CPU.DerivO3CPUParams_numPhysFloatRegs_set)
    numPhysIntRegs = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_numPhysIntRegs_get, _param_DerivO3CPU.DerivO3CPUParams_numPhysIntRegs_set)
    RASSize = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_RASSize_get, _param_DerivO3CPU.DerivO3CPUParams_RASSize_set)
    wbDepth = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_wbDepth_get, _param_DerivO3CPU.DerivO3CPUParams_wbDepth_set)
    issueToExecuteDelay = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_issueToExecuteDelay_get, _param_DerivO3CPU.DerivO3CPUParams_issueToExecuteDelay_set)
    predType = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_predType_get, _param_DerivO3CPU.DerivO3CPUParams_predType_set)
    smtROBThreshold = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_smtROBThreshold_get, _param_DerivO3CPU.DerivO3CPUParams_smtROBThreshold_set)
    smtNumFetchingThreads = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_smtNumFetchingThreads_get, _param_DerivO3CPU.DerivO3CPUParams_smtNumFetchingThreads_set)
    wbWidth = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_wbWidth_get, _param_DerivO3CPU.DerivO3CPUParams_wbWidth_set)
    commitToFetchDelay = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_commitToFetchDelay_get, _param_DerivO3CPU.DerivO3CPUParams_commitToFetchDelay_set)
    fetchTrapLatency = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_fetchTrapLatency_get, _param_DerivO3CPU.DerivO3CPUParams_fetchTrapLatency_set)
    fuPool = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_fuPool_get, _param_DerivO3CPU.DerivO3CPUParams_fuPool_set)
    localHistoryTableSize = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_localHistoryTableSize_get, _param_DerivO3CPU.DerivO3CPUParams_localHistoryTableSize_set)
    decodeToFetchDelay = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_decodeToFetchDelay_get, _param_DerivO3CPU.DerivO3CPUParams_decodeToFetchDelay_set)
    renameToFetchDelay = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_renameToFetchDelay_get, _param_DerivO3CPU.DerivO3CPUParams_renameToFetchDelay_set)
    LSQDepCheckShift = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_LSQDepCheckShift_get, _param_DerivO3CPU.DerivO3CPUParams_LSQDepCheckShift_set)
    decodeWidth = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_decodeWidth_get, _param_DerivO3CPU.DerivO3CPUParams_decodeWidth_set)
    trapLatency = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_trapLatency_get, _param_DerivO3CPU.DerivO3CPUParams_trapLatency_set)
    smtIQPolicy = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_smtIQPolicy_get, _param_DerivO3CPU.DerivO3CPUParams_smtIQPolicy_set)
    globalHistoryBits = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_globalHistoryBits_get, _param_DerivO3CPU.DerivO3CPUParams_globalHistoryBits_set)
    needsTSO = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_needsTSO_get, _param_DerivO3CPU.DerivO3CPUParams_needsTSO_set)
    smtROBPolicy = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_smtROBPolicy_get, _param_DerivO3CPU.DerivO3CPUParams_smtROBPolicy_set)
    localPredictorSize = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_localPredictorSize_get, _param_DerivO3CPU.DerivO3CPUParams_localPredictorSize_set)
    choiceCtrBits = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_choiceCtrBits_get, _param_DerivO3CPU.DerivO3CPUParams_choiceCtrBits_set)
    numRobs = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_numRobs_get, _param_DerivO3CPU.DerivO3CPUParams_numRobs_set)
    localHistoryBits = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_localHistoryBits_get, _param_DerivO3CPU.DerivO3CPUParams_localHistoryBits_set)
    iewToDecodeDelay = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_iewToDecodeDelay_get, _param_DerivO3CPU.DerivO3CPUParams_iewToDecodeDelay_set)
    smtLSQPolicy = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_smtLSQPolicy_get, _param_DerivO3CPU.DerivO3CPUParams_smtLSQPolicy_set)
    commitWidth = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_commitWidth_get, _param_DerivO3CPU.DerivO3CPUParams_commitWidth_set)
    globalPredictorSize = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_globalPredictorSize_get, _param_DerivO3CPU.DerivO3CPUParams_globalPredictorSize_set)
    localCtrBits = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_localCtrBits_get, _param_DerivO3CPU.DerivO3CPUParams_localCtrBits_set)
    instShiftAmt = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_instShiftAmt_get, _param_DerivO3CPU.DerivO3CPUParams_instShiftAmt_set)
    forwardComSize = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_forwardComSize_get, _param_DerivO3CPU.DerivO3CPUParams_forwardComSize_set)
    BTBTagSize = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_BTBTagSize_get, _param_DerivO3CPU.DerivO3CPUParams_BTBTagSize_set)
    numIQEntries = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_numIQEntries_get, _param_DerivO3CPU.DerivO3CPUParams_numIQEntries_set)
    activity = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_activity_get, _param_DerivO3CPU.DerivO3CPUParams_activity_set)
    LFSTSize = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_LFSTSize_get, _param_DerivO3CPU.DerivO3CPUParams_LFSTSize_set)
    iewToCommitDelay = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_iewToCommitDelay_get, _param_DerivO3CPU.DerivO3CPUParams_iewToCommitDelay_set)
    renameToIEWDelay = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_renameToIEWDelay_get, _param_DerivO3CPU.DerivO3CPUParams_renameToIEWDelay_set)
    iewToFetchDelay = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_iewToFetchDelay_get, _param_DerivO3CPU.DerivO3CPUParams_iewToFetchDelay_set)
    LQEntries = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_LQEntries_get, _param_DerivO3CPU.DerivO3CPUParams_LQEntries_set)
    smtIQThreshold = _swig_property(_param_DerivO3CPU.DerivO3CPUParams_smtIQThreshold_get, _param_DerivO3CPU.DerivO3CPUParams_smtIQThreshold_set)
    def __init__(self): 
        this = _param_DerivO3CPU.new_DerivO3CPUParams()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _param_DerivO3CPU.delete_DerivO3CPUParams
    __del__ = lambda self : None;
DerivO3CPUParams_swigregister = _param_DerivO3CPU.DerivO3CPUParams_swigregister
DerivO3CPUParams_swigregister(DerivO3CPUParams)



