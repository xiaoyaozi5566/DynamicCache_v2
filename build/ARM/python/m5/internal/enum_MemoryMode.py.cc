#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_MemoryMode[] = {
    120,156,197,86,95,111,27,69,16,159,189,59,59,57,199,110,
    156,166,77,255,133,214,32,42,89,5,98,129,90,245,129,170,
    106,161,85,1,41,41,156,133,218,186,136,227,114,183,118,206,
    177,239,172,219,117,195,33,231,133,84,192,27,31,129,39,30,
    120,230,43,240,189,202,204,236,157,227,84,84,226,133,224,228,
    86,227,185,245,252,249,237,111,102,54,132,226,83,193,231,94,
    11,64,189,66,33,194,127,1,35,128,177,128,158,0,33,5,
    68,171,176,95,129,236,38,68,21,120,9,208,179,64,90,112,
    132,130,13,207,45,72,234,252,155,42,140,108,214,8,200,107,
    32,29,232,85,224,73,178,6,142,172,194,126,13,178,239,64,
    8,145,8,120,26,45,65,180,12,47,209,58,10,46,27,92,
    134,168,198,130,11,209,10,11,53,200,155,32,87,160,135,198,
    151,160,215,64,83,55,208,212,25,54,245,23,153,138,240,77,
    19,162,6,109,199,88,158,209,78,135,118,178,143,51,108,101,
    21,164,13,195,38,244,154,44,172,65,111,141,133,179,208,59,
    203,194,58,244,214,89,56,7,189,115,148,67,183,189,134,24,
    196,175,240,211,22,40,233,58,46,47,100,166,226,52,241,227,
    164,159,198,22,189,175,210,66,208,133,180,44,21,24,126,74,
    24,254,1,12,96,100,21,24,30,2,8,250,14,48,178,224,
    144,133,67,11,242,54,204,4,12,29,136,108,152,161,155,10,
    28,9,24,8,56,178,224,27,155,54,28,226,234,96,214,87,
    193,209,6,192,33,103,109,44,45,193,97,5,102,21,232,62,
    157,89,164,216,119,33,251,29,126,216,100,163,203,108,212,130,
    25,174,14,28,57,112,88,133,39,184,9,85,67,151,176,18,
    79,103,152,41,106,186,109,7,163,221,89,72,151,82,137,226,
    44,9,198,82,55,81,246,101,50,29,251,219,114,156,102,249,
    118,26,201,118,173,220,149,170,173,73,160,247,60,254,153,77,
    120,140,39,154,205,165,137,212,43,40,244,227,36,242,199,105,
    52,29,73,189,76,182,252,126,60,146,190,207,47,63,31,79,
    210,76,63,204,178,52,243,8,82,86,142,210,96,254,11,2,
    52,28,165,74,182,201,27,187,241,200,188,166,221,253,9,91,
    164,0,56,84,250,113,36,85,152,197,19,141,39,101,44,210,
    110,178,214,166,51,226,69,61,199,165,243,181,194,243,236,228,
    65,122,16,36,131,206,3,169,246,117,58,233,60,138,245,103,
    211,221,206,163,135,219,183,252,7,222,253,237,110,60,254,168,
    179,59,141,71,81,231,190,183,221,153,228,122,47,77,58,227,
    91,157,56,209,18,1,26,117,94,131,102,11,183,156,37,39,
    7,241,192,143,57,61,127,79,142,38,50,115,73,123,153,2,
    16,77,81,23,85,97,139,182,104,160,84,193,199,22,155,214,
    138,216,137,41,193,144,146,38,110,57,37,155,254,4,62,55,
    60,246,125,11,178,77,226,202,16,255,5,29,46,50,166,75,
    239,44,126,247,21,33,99,180,67,155,24,96,148,51,230,23,
    18,13,119,222,161,35,79,128,73,82,129,97,21,12,121,144,
    115,134,77,89,78,43,110,39,51,22,26,119,160,174,126,5,
    132,122,198,81,160,46,251,237,164,197,164,9,218,165,194,67,
    213,6,186,254,145,249,217,109,83,34,59,204,19,189,23,171,
    244,32,225,211,32,153,43,170,139,24,125,153,63,222,29,202,
    80,171,107,168,120,150,78,91,97,144,36,169,110,5,81,212,
    10,180,206,226,221,169,150,170,165,211,214,117,197,180,243,214,
    74,170,205,237,229,147,146,90,68,3,164,150,249,18,197,161,
    198,47,235,252,133,207,67,73,141,52,217,75,35,133,122,50,
    49,144,218,171,148,92,222,11,20,121,212,103,80,190,95,186,
    102,110,182,171,37,147,148,28,245,117,141,73,25,40,229,179,
    107,210,51,255,200,210,139,96,52,149,154,246,43,29,104,140,
    128,68,227,244,20,25,120,145,114,46,83,166,164,252,36,77,
    162,28,163,140,195,183,41,128,139,204,195,58,16,19,207,35,
    11,151,112,173,66,67,108,136,166,21,58,5,247,170,37,255,
    54,40,125,224,243,23,69,79,65,46,30,97,231,105,91,220,
    58,56,51,46,78,178,206,253,196,187,66,203,38,45,111,209,
    114,181,76,254,116,16,104,188,142,192,22,121,181,56,237,208,
    46,18,180,203,4,119,78,20,216,165,227,2,195,62,217,165,
    66,177,168,156,142,11,197,38,8,178,187,69,21,80,9,226,
    225,83,109,28,115,159,129,241,168,123,50,123,152,182,30,113,
    113,145,144,131,5,66,122,116,38,204,70,239,242,155,64,108,
    253,95,32,14,12,136,31,146,215,122,193,157,6,115,166,38,
    66,58,120,107,177,95,61,64,33,191,64,112,46,2,121,1,
    231,222,147,164,193,3,140,135,32,207,104,211,71,12,190,70,
    112,136,101,125,27,54,138,193,164,168,115,78,178,244,251,188,
    149,246,91,26,202,24,238,92,87,91,215,213,199,216,24,90,
    119,185,213,152,214,96,138,63,147,147,12,139,220,229,47,166,
    88,125,46,92,191,24,45,8,248,121,2,210,42,97,230,30,
    160,176,254,177,61,157,34,198,181,57,198,20,242,109,114,89,
    99,128,109,184,128,79,77,112,92,126,202,93,146,47,26,252,
    22,159,79,8,106,202,86,2,221,209,188,174,137,154,19,162,
    212,188,246,9,182,156,74,58,222,123,104,255,94,89,106,85,
    152,115,131,30,155,2,38,246,255,140,179,91,16,61,126,2,
    226,1,30,119,81,47,92,153,244,208,113,174,211,246,111,129,
    155,206,63,140,62,203,212,157,85,180,37,44,75,117,155,183,
    154,73,248,5,252,178,208,177,142,108,16,52,165,236,226,170,
    181,56,165,156,121,165,50,129,254,213,36,114,78,148,180,119,
    105,94,181,246,188,106,143,187,222,252,114,132,173,232,116,72,
    181,108,156,249,20,247,195,99,74,81,191,191,34,214,173,5,
    162,188,79,203,7,115,142,136,82,247,159,135,120,13,222,60,
    162,124,211,20,169,141,40,135,35,95,173,50,178,175,221,187,
    77,204,231,231,240,230,202,35,141,183,74,139,85,54,3,108,
    29,120,253,210,57,15,118,227,114,174,162,254,176,131,179,219,
    92,65,105,120,121,239,208,242,46,45,55,200,2,57,51,197,
    199,220,54,29,37,145,7,220,83,248,204,189,173,178,123,196,
    9,142,255,56,226,223,4,58,29,23,227,95,199,227,56,25,
    176,251,157,19,56,240,213,33,124,17,100,167,92,165,12,203,
    29,211,7,239,114,219,187,137,11,221,5,220,85,87,84,45,
    186,143,218,162,134,247,2,71,212,27,174,237,86,221,138,141,
    55,86,210,172,139,154,237,214,92,193,127,214,223,244,195,19,
    63,
};

EmbeddedPython embedded_m5_internal_enum_MemoryMode(
    "m5/internal/enum_MemoryMode.py",
    "/Users/yaowang/Desktop/GitHub/GEM5_DRAMSim2/build/ARM/python/m5/internal/enum_MemoryMode.py",
    "m5.internal.enum_MemoryMode",
    data_m5_internal_enum_MemoryMode,
    1489,
    3646);

} // anonymous namespace
