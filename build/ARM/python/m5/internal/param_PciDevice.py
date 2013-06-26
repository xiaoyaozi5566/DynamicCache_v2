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
            fp, pathname, description = imp.find_module('_param_PciDevice', [dirname(__file__)])
        except ImportError:
            import _param_PciDevice
            return _param_PciDevice
        if fp is not None:
            try:
                _mod = imp.load_module('_param_PciDevice', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _param_PciDevice = swig_import_helper()
    del swig_import_helper
else:
    import _param_PciDevice
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


import param_Platform
import param_IntrControl
import param_System
import enum_MemoryMode
import AbstractMemory_vector
import param_AbstractMemory
import range
import param_MemObject
import param_ClockedObject
import param_SimObject
import param_DmaDevice
import param_PioDevice
class PciDevice(param_DmaDevice.DmaDevice):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined")
    __repr__ = _swig_repr
PciDevice_swigregister = _param_PciDevice.PciDevice_swigregister
PciDevice_swigregister(PciDevice)

class PciDeviceParams(param_DmaDevice.DmaDeviceParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    VendorID = _swig_property(_param_PciDevice.PciDeviceParams_VendorID_get, _param_PciDevice.PciDeviceParams_VendorID_set)
    InterruptPin = _swig_property(_param_PciDevice.PciDeviceParams_InterruptPin_get, _param_PciDevice.PciDeviceParams_InterruptPin_set)
    HeaderType = _swig_property(_param_PciDevice.PciDeviceParams_HeaderType_get, _param_PciDevice.PciDeviceParams_HeaderType_set)
    pci_dev = _swig_property(_param_PciDevice.PciDeviceParams_pci_dev_get, _param_PciDevice.PciDeviceParams_pci_dev_set)
    BAR5Size = _swig_property(_param_PciDevice.PciDeviceParams_BAR5Size_get, _param_PciDevice.PciDeviceParams_BAR5Size_set)
    SubsystemID = _swig_property(_param_PciDevice.PciDeviceParams_SubsystemID_get, _param_PciDevice.PciDeviceParams_SubsystemID_set)
    CardbusCIS = _swig_property(_param_PciDevice.PciDeviceParams_CardbusCIS_get, _param_PciDevice.PciDeviceParams_CardbusCIS_set)
    MinimumGrant = _swig_property(_param_PciDevice.PciDeviceParams_MinimumGrant_get, _param_PciDevice.PciDeviceParams_MinimumGrant_set)
    Revision = _swig_property(_param_PciDevice.PciDeviceParams_Revision_get, _param_PciDevice.PciDeviceParams_Revision_set)
    Status = _swig_property(_param_PciDevice.PciDeviceParams_Status_get, _param_PciDevice.PciDeviceParams_Status_set)
    MaximumLatency = _swig_property(_param_PciDevice.PciDeviceParams_MaximumLatency_get, _param_PciDevice.PciDeviceParams_MaximumLatency_set)
    BAR2LegacyIO = _swig_property(_param_PciDevice.PciDeviceParams_BAR2LegacyIO_get, _param_PciDevice.PciDeviceParams_BAR2LegacyIO_set)
    BAR0Size = _swig_property(_param_PciDevice.PciDeviceParams_BAR0Size_get, _param_PciDevice.PciDeviceParams_BAR0Size_set)
    pio_latency = _swig_property(_param_PciDevice.PciDeviceParams_pio_latency_get, _param_PciDevice.PciDeviceParams_pio_latency_set)
    LatencyTimer = _swig_property(_param_PciDevice.PciDeviceParams_LatencyTimer_get, _param_PciDevice.PciDeviceParams_LatencyTimer_set)
    BAR1LegacyIO = _swig_property(_param_PciDevice.PciDeviceParams_BAR1LegacyIO_get, _param_PciDevice.PciDeviceParams_BAR1LegacyIO_set)
    platform = _swig_property(_param_PciDevice.PciDeviceParams_platform_get, _param_PciDevice.PciDeviceParams_platform_set)
    BAR4LegacyIO = _swig_property(_param_PciDevice.PciDeviceParams_BAR4LegacyIO_get, _param_PciDevice.PciDeviceParams_BAR4LegacyIO_set)
    SubsystemVendorID = _swig_property(_param_PciDevice.PciDeviceParams_SubsystemVendorID_get, _param_PciDevice.PciDeviceParams_SubsystemVendorID_set)
    BAR3Size = _swig_property(_param_PciDevice.PciDeviceParams_BAR3Size_get, _param_PciDevice.PciDeviceParams_BAR3Size_set)
    BAR5LegacyIO = _swig_property(_param_PciDevice.PciDeviceParams_BAR5LegacyIO_get, _param_PciDevice.PciDeviceParams_BAR5LegacyIO_set)
    BAR0LegacyIO = _swig_property(_param_PciDevice.PciDeviceParams_BAR0LegacyIO_get, _param_PciDevice.PciDeviceParams_BAR0LegacyIO_set)
    Command = _swig_property(_param_PciDevice.PciDeviceParams_Command_get, _param_PciDevice.PciDeviceParams_Command_set)
    DeviceID = _swig_property(_param_PciDevice.PciDeviceParams_DeviceID_get, _param_PciDevice.PciDeviceParams_DeviceID_set)
    ProgIF = _swig_property(_param_PciDevice.PciDeviceParams_ProgIF_get, _param_PciDevice.PciDeviceParams_ProgIF_set)
    SubClassCode = _swig_property(_param_PciDevice.PciDeviceParams_SubClassCode_get, _param_PciDevice.PciDeviceParams_SubClassCode_set)
    pci_func = _swig_property(_param_PciDevice.PciDeviceParams_pci_func_get, _param_PciDevice.PciDeviceParams_pci_func_set)
    BAR4Size = _swig_property(_param_PciDevice.PciDeviceParams_BAR4Size_get, _param_PciDevice.PciDeviceParams_BAR4Size_set)
    BAR1 = _swig_property(_param_PciDevice.PciDeviceParams_BAR1_get, _param_PciDevice.PciDeviceParams_BAR1_set)
    BAR0 = _swig_property(_param_PciDevice.PciDeviceParams_BAR0_get, _param_PciDevice.PciDeviceParams_BAR0_set)
    BAR3 = _swig_property(_param_PciDevice.PciDeviceParams_BAR3_get, _param_PciDevice.PciDeviceParams_BAR3_set)
    BAR2 = _swig_property(_param_PciDevice.PciDeviceParams_BAR2_get, _param_PciDevice.PciDeviceParams_BAR2_set)
    BAR5 = _swig_property(_param_PciDevice.PciDeviceParams_BAR5_get, _param_PciDevice.PciDeviceParams_BAR5_set)
    BAR4 = _swig_property(_param_PciDevice.PciDeviceParams_BAR4_get, _param_PciDevice.PciDeviceParams_BAR4_set)
    ClassCode = _swig_property(_param_PciDevice.PciDeviceParams_ClassCode_get, _param_PciDevice.PciDeviceParams_ClassCode_set)
    BIST = _swig_property(_param_PciDevice.PciDeviceParams_BIST_get, _param_PciDevice.PciDeviceParams_BIST_set)
    CacheLineSize = _swig_property(_param_PciDevice.PciDeviceParams_CacheLineSize_get, _param_PciDevice.PciDeviceParams_CacheLineSize_set)
    BAR2Size = _swig_property(_param_PciDevice.PciDeviceParams_BAR2Size_get, _param_PciDevice.PciDeviceParams_BAR2Size_set)
    ExpansionROM = _swig_property(_param_PciDevice.PciDeviceParams_ExpansionROM_get, _param_PciDevice.PciDeviceParams_ExpansionROM_set)
    BAR3LegacyIO = _swig_property(_param_PciDevice.PciDeviceParams_BAR3LegacyIO_get, _param_PciDevice.PciDeviceParams_BAR3LegacyIO_set)
    config_latency = _swig_property(_param_PciDevice.PciDeviceParams_config_latency_get, _param_PciDevice.PciDeviceParams_config_latency_set)
    pci_bus = _swig_property(_param_PciDevice.PciDeviceParams_pci_bus_get, _param_PciDevice.PciDeviceParams_pci_bus_set)
    InterruptLine = _swig_property(_param_PciDevice.PciDeviceParams_InterruptLine_get, _param_PciDevice.PciDeviceParams_InterruptLine_set)
    BAR1Size = _swig_property(_param_PciDevice.PciDeviceParams_BAR1Size_get, _param_PciDevice.PciDeviceParams_BAR1Size_set)
    port_config_connection_count = _swig_property(_param_PciDevice.PciDeviceParams_port_config_connection_count_get, _param_PciDevice.PciDeviceParams_port_config_connection_count_set)
    def __init__(self): 
        this = _param_PciDevice.new_PciDeviceParams()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _param_PciDevice.delete_PciDeviceParams
    __del__ = lambda self : None;
PciDeviceParams_swigregister = _param_PciDevice.PciDeviceParams_swigregister
PciDeviceParams_swigregister(PciDeviceParams)



