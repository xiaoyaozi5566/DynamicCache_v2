#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_ArmTLB[] = {
    120,156,181,83,77,111,211,64,16,157,117,28,39,77,43,168,
    64,130,235,30,45,36,106,9,200,165,32,212,68,69,109,165,
    6,144,83,84,225,139,181,177,183,196,169,191,180,187,85,98,
    174,225,127,195,204,58,105,131,16,199,218,242,120,102,118,61,
    251,222,188,113,2,155,171,131,207,9,7,208,41,58,248,164,
    12,114,128,130,65,196,128,81,236,64,238,192,213,198,235,180,
    94,7,114,23,10,23,34,23,247,184,32,93,184,97,144,118,
    225,23,192,26,224,123,212,133,212,3,201,108,182,119,159,245,
    32,237,195,212,223,195,131,178,223,120,249,12,61,67,225,52,
    43,190,204,22,50,49,109,138,204,171,135,213,137,220,172,154,
    39,24,141,84,113,37,102,185,188,22,249,173,84,201,46,143,
    49,241,24,162,35,129,224,35,210,200,33,66,81,135,32,34,
    254,53,250,93,144,30,44,122,32,251,176,216,35,42,107,7,
    162,1,132,83,223,197,47,67,170,163,159,183,231,92,76,71,
    199,199,59,135,233,119,152,255,90,41,195,111,42,197,119,22,
    184,169,120,90,241,37,6,220,204,37,55,74,148,58,23,38,
    171,74,190,204,204,92,191,164,170,141,54,178,224,149,165,194,
    107,161,68,33,141,84,254,62,241,236,163,137,227,18,83,113,
    108,6,54,40,170,244,46,167,144,112,153,166,150,182,25,201,
    106,21,39,185,208,218,238,154,8,172,169,8,146,221,85,147,
    211,37,144,84,221,120,212,90,123,170,117,49,41,75,99,136,
    161,40,27,251,70,76,62,117,239,193,232,49,154,224,155,70,
    182,65,35,170,165,40,127,4,167,82,223,154,170,14,206,50,
    115,126,55,11,206,62,77,134,241,105,56,154,160,108,111,2,
    173,146,64,168,100,142,166,8,72,156,203,241,81,221,216,62,
    190,166,122,196,204,99,116,31,48,11,163,221,243,175,112,239,
    255,39,220,162,75,218,109,148,242,108,6,229,235,209,80,225,
    240,81,178,79,242,17,239,240,41,29,185,191,43,223,229,56,
    59,217,226,192,128,235,236,167,212,180,237,252,186,149,208,202,
    134,58,80,119,67,59,3,182,18,65,13,123,100,168,209,182,
    91,23,101,219,102,42,97,9,90,62,155,207,31,167,141,4,
    244,237,223,109,124,198,62,251,132,203,28,160,41,134,71,247,
    63,79,8,219,63,6,179,118,190,180,157,43,138,84,181,106,
    66,103,59,224,182,236,227,32,182,39,126,104,103,247,35,21,
    214,212,190,67,54,192,251,208,121,225,253,1,226,6,244,158,
};

EmbeddedPython embedded_m5_objects_ArmTLB(
    "m5/objects/ArmTLB.py",
    "/Users/yaowang/Desktop/GitHub/GEM5_DRAMSim2/src/arch/arm/ArmTLB.py",
    "m5.objects.ArmTLB",
    data_m5_objects_ArmTLB,
    560,
    1145);

} // anonymous namespace
