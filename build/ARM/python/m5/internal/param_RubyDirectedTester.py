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
            fp, pathname, description = imp.find_module('_param_RubyDirectedTester', [dirname(__file__)])
        except ImportError:
            import _param_RubyDirectedTester
            return _param_RubyDirectedTester
        if fp is not None:
            try:
                _mod = imp.load_module('_param_RubyDirectedTester', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _param_RubyDirectedTester = swig_import_helper()
    del swig_import_helper
else:
    import _param_RubyDirectedTester
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


import param_DirectedGenerator
import param_System
import enum_MemoryMode
import AbstractMemory_vector
import param_AbstractMemory
import range
import param_MemObject
import param_ClockedObject
import param_SimObject
class RubyDirectedTester(param_MemObject.MemObject):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined")
    __repr__ = _swig_repr
RubyDirectedTester_swigregister = _param_RubyDirectedTester.RubyDirectedTester_swigregister
RubyDirectedTester_swigregister(RubyDirectedTester)

class RubyDirectedTesterParams(param_MemObject.MemObjectParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def create(self): return _param_RubyDirectedTester.RubyDirectedTesterParams_create(self)
    requests_to_complete = _swig_property(_param_RubyDirectedTester.RubyDirectedTesterParams_requests_to_complete_get, _param_RubyDirectedTester.RubyDirectedTesterParams_requests_to_complete_set)
    generator = _swig_property(_param_RubyDirectedTester.RubyDirectedTesterParams_generator_get, _param_RubyDirectedTester.RubyDirectedTesterParams_generator_set)
    port_cpuPort_connection_count = _swig_property(_param_RubyDirectedTester.RubyDirectedTesterParams_port_cpuPort_connection_count_get, _param_RubyDirectedTester.RubyDirectedTesterParams_port_cpuPort_connection_count_set)
    def __init__(self): 
        this = _param_RubyDirectedTester.new_RubyDirectedTesterParams()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _param_RubyDirectedTester.delete_RubyDirectedTesterParams
    __del__ = lambda self : None;
RubyDirectedTesterParams_swigregister = _param_RubyDirectedTester.RubyDirectedTesterParams_swigregister
RubyDirectedTesterParams_swigregister(RubyDirectedTesterParams)



