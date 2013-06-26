#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Ide[] = {
    120,156,173,85,89,111,211,64,16,30,59,71,111,122,0,45,
    119,141,16,82,224,129,208,180,69,8,33,68,83,23,136,68,
    161,114,160,18,126,137,92,239,182,221,214,71,240,110,2,225,
    9,169,192,223,226,167,193,204,184,78,131,16,18,15,77,226,
    201,204,216,153,217,239,155,35,33,156,190,74,120,61,119,0,
    116,23,21,129,31,11,34,128,216,2,223,2,139,108,27,34,
    27,222,145,86,130,168,4,113,25,252,50,222,41,131,172,192,
    190,5,162,2,223,0,78,0,62,248,85,16,85,144,22,123,
    199,134,222,49,16,227,32,203,236,157,24,122,199,65,76,66,
    187,54,133,73,213,47,124,213,44,212,204,4,138,182,138,223,
    238,29,201,208,228,46,18,247,207,238,238,132,202,149,125,21,
    74,83,65,171,37,100,203,13,11,40,54,94,77,130,114,9,
    21,9,132,32,7,116,96,131,111,131,215,174,209,19,166,138,
    34,14,180,145,25,199,208,81,208,151,53,162,193,140,163,232,
    116,146,32,150,157,142,153,100,35,78,69,47,34,179,140,102,
    63,136,116,141,50,157,9,253,4,69,253,189,150,153,174,15,
    130,244,83,144,28,212,93,169,143,77,218,173,191,84,230,85,
    111,175,254,114,107,123,189,227,122,27,219,136,172,81,215,89,
    88,23,178,95,199,163,63,232,14,60,202,123,155,226,208,209,
    170,96,198,114,84,174,210,199,67,92,165,2,215,198,40,46,
    68,36,75,112,84,38,128,88,164,19,196,88,97,79,149,42,
    133,245,33,207,24,123,198,169,74,39,88,210,9,34,129,240,
    123,196,165,161,192,43,61,173,49,54,188,80,159,165,112,4,
    230,117,132,140,130,129,163,18,39,86,97,150,106,25,166,137,
    208,30,17,160,137,33,55,83,125,233,180,92,77,12,209,65,
    29,21,7,7,178,70,166,199,193,9,4,19,102,6,221,188,
    80,59,65,22,196,12,238,117,96,100,18,14,216,203,137,152,
    2,190,37,40,112,203,229,58,83,220,22,133,229,7,243,4,
    231,203,60,101,185,83,96,170,90,85,107,1,223,102,38,231,
    127,51,77,76,150,70,145,204,254,174,194,207,127,85,129,24,
    174,80,45,124,46,1,117,62,14,11,147,143,204,147,62,73,
    19,226,79,177,156,166,33,241,103,88,191,192,114,150,229,28,
    203,121,150,11,44,47,210,4,249,151,88,191,76,67,228,47,
    210,244,248,75,172,95,97,253,42,136,41,240,175,129,188,14,
    71,55,40,151,152,230,6,184,57,226,153,97,207,45,234,129,
    11,84,166,5,66,127,151,0,187,91,92,121,237,4,198,4,
    225,33,54,130,73,29,115,168,180,19,14,137,80,63,190,98,
    33,230,63,162,32,58,212,87,236,88,69,115,169,190,147,88,
    166,42,82,19,63,110,242,215,90,51,111,175,71,77,205,156,
    190,117,186,105,102,28,125,168,246,141,94,26,73,90,164,112,
    210,253,125,45,77,109,249,143,54,242,104,67,24,18,187,184,
    18,210,140,27,41,239,94,238,32,58,53,207,237,174,76,68,
    154,97,247,112,139,242,138,64,131,66,108,166,113,28,36,130,
    231,190,109,2,211,203,127,224,225,51,90,97,110,10,182,25,
    5,90,111,166,66,154,105,122,170,183,119,230,160,159,237,100,
    233,65,235,5,183,116,115,195,123,88,40,43,133,210,40,148,
    213,66,89,43,148,245,188,165,18,92,55,89,175,107,94,171,
    36,207,49,244,236,168,132,207,67,129,219,234,139,44,140,149,
    81,163,49,106,172,142,26,107,100,120,211,197,98,123,143,113,
    87,27,124,83,165,29,102,155,217,11,77,22,117,78,25,62,
    223,57,162,46,186,71,113,26,167,115,52,107,147,252,175,183,
    189,96,189,169,113,49,9,64,188,254,96,184,252,61,58,26,
    151,6,189,93,42,186,230,126,194,253,239,217,197,122,217,74,
    122,49,175,15,110,8,62,201,249,130,99,30,159,230,255,1,
    207,110,82,60,90,114,115,214,164,53,103,47,218,139,213,223,
    43,179,122,67,
};

EmbeddedPython embedded_m5_objects_Ide(
    "m5/objects/Ide.py",
    "/Users/yaowang/Desktop/GitHub/GEM5_DRAMSim2/src/dev/Ide.py",
    "m5.objects.Ide",
    data_m5_objects_Ide,
    884,
    1862);

} // anonymous namespace
