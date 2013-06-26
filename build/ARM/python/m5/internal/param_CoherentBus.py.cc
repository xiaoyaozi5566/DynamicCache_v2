#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_CoherentBus[] = {
    120,156,197,88,95,111,219,200,17,159,37,41,218,146,173,88,
    142,19,199,190,164,57,221,161,41,132,107,27,181,105,175,41,
    218,192,184,228,18,92,91,192,190,43,117,69,18,245,90,150,
    38,87,18,101,138,20,200,117,124,42,228,151,58,104,251,214,
    143,208,167,62,244,185,95,161,223,171,157,153,229,82,114,254,
    0,7,180,80,108,113,177,92,46,103,231,207,239,55,59,203,
    16,202,191,26,94,159,180,1,138,190,0,136,240,39,32,1,
    152,8,192,123,33,5,68,59,112,82,131,252,199,16,213,224,
    37,64,223,2,105,193,5,118,108,248,173,5,233,38,191,227,
    66,98,243,136,128,89,3,164,3,253,26,60,77,183,193,145,
    46,156,52,32,255,3,8,33,82,1,207,162,53,136,214,225,
    37,74,199,78,157,5,174,67,212,224,78,29,162,13,238,52,
    96,214,2,185,1,125,20,190,6,253,38,138,250,8,69,93,
    97,81,255,38,81,17,62,185,6,81,147,166,163,46,207,105,
    166,67,51,121,141,43,44,101,203,104,214,130,126,203,244,183,
    161,191,109,250,87,161,127,213,244,119,160,191,3,209,22,200,
    22,140,175,193,0,205,110,85,178,175,131,180,97,188,11,253,
    93,144,248,187,14,23,232,153,104,155,231,222,224,185,87,171,
    185,123,60,119,31,250,251,32,241,183,167,231,186,208,235,92,
    71,63,199,255,193,191,14,250,25,212,38,54,47,100,94,196,
    89,234,199,233,32,139,45,122,238,82,67,81,9,169,89,43,
    195,243,41,133,231,159,192,177,137,172,50,60,231,128,130,5,
    233,159,88,112,206,157,115,11,102,29,152,11,24,59,16,217,
    48,199,101,106,164,192,80,192,133,5,95,217,52,225,28,91,
    7,29,122,27,28,165,99,51,102,135,106,73,107,112,94,131,
    121,13,122,207,230,22,13,156,212,33,255,7,252,241,22,11,
    93,103,161,22,204,177,117,224,194,129,115,23,158,226,36,28,
    26,215,201,124,241,108,142,150,226,72,175,227,160,182,71,75,
    230,146,41,81,156,167,193,68,170,171,216,247,167,65,30,76,
    252,79,179,145,204,101,170,30,157,22,157,134,153,151,21,119,
    167,129,26,121,252,162,77,30,153,76,21,11,204,82,169,54,
    176,51,136,211,200,159,100,209,105,34,213,58,73,243,7,113,
    34,125,159,31,254,114,50,205,114,245,36,207,179,220,35,167,
    242,96,146,5,213,27,228,210,48,201,10,217,161,213,120,25,
    143,196,43,154,61,152,178,68,82,128,149,165,151,35,89,132,
    121,60,85,24,43,45,145,102,147,180,14,69,137,155,226,119,
    216,116,127,83,96,68,187,179,32,59,11,210,97,247,177,44,
    78,84,54,237,126,22,171,95,156,30,119,63,123,114,248,177,
    255,216,123,120,216,139,39,247,186,199,167,113,18,117,31,122,
    135,221,233,76,141,178,180,59,249,184,27,167,74,162,139,146,
    238,107,206,185,139,147,200,109,197,89,60,244,99,54,208,31,
    201,100,42,243,58,141,190,71,42,136,150,216,20,174,176,69,
    71,52,177,87,195,203,22,183,172,13,113,20,147,137,33,153,
    77,248,114,12,162,254,5,28,59,12,253,137,5,249,45,194,
    203,24,127,130,2,140,168,233,209,51,139,159,253,154,124,163,
    71,199,54,161,64,15,206,25,99,8,54,156,249,128,194,158,
    2,3,165,6,99,23,52,128,16,119,26,81,249,140,90,156,
    78,98,44,20,238,192,102,241,55,64,103,207,89,11,28,203,
    255,126,89,98,218,2,85,39,94,227,208,46,46,253,39,198,
    104,175,67,134,28,49,82,212,40,46,178,179,148,227,65,125,
    102,85,15,125,244,197,236,243,227,177,12,85,241,62,14,60,
    207,78,219,97,144,166,153,106,7,81,212,14,148,202,227,227,
    83,37,139,182,202,218,119,52,240,188,109,3,182,74,222,108,
    106,192,69,64,64,112,233,155,40,14,21,222,236,240,13,199,
    163,144,10,129,50,202,162,2,199,73,196,80,42,175,102,208,
    60,10,10,90,81,93,193,254,67,179,52,163,179,227,26,44,
    21,50,25,168,6,195,50,40,10,159,151,166,113,70,32,73,
    122,17,36,167,82,209,252,66,5,10,53,160,174,94,116,165,
    24,220,35,171,141,209,100,150,159,102,105,52,67,61,227,240,
    3,82,97,143,145,184,9,132,197,235,136,195,53,108,93,104,
    138,93,209,178,66,167,68,159,107,16,184,75,14,0,70,128,
    40,51,11,162,241,2,243,79,199,226,4,194,182,49,65,73,
    58,103,21,239,38,53,183,168,249,22,53,183,141,249,171,242,
    65,243,85,31,220,165,117,45,54,60,180,75,19,109,99,226,
    209,37,146,237,47,72,134,249,178,71,100,177,136,82,11,178,
    216,228,132,252,160,100,2,209,16,1,64,252,88,224,159,93,
    227,181,200,100,215,64,215,35,60,46,131,114,184,4,74,143,
    162,194,136,244,222,123,155,27,219,239,206,141,67,237,198,31,
    210,186,155,37,126,154,140,155,134,8,41,248,214,114,214,122,
    140,157,217,13,114,232,178,43,111,224,14,248,52,109,242,86,
    198,219,33,23,2,58,155,104,15,235,142,67,72,27,216,176,
    91,110,81,5,229,207,105,158,125,61,107,103,131,182,2,163,
    195,131,59,197,221,59,197,207,49,61,180,15,56,225,232,4,
    161,83,64,46,167,57,82,189,206,55,154,178,62,211,215,47,
    183,24,116,57,109,247,28,41,118,52,103,130,2,179,0,38,
    169,149,122,185,81,121,153,148,190,79,139,54,216,197,54,220,
    192,171,33,88,51,63,227,108,201,69,7,63,197,235,17,57,
    155,236,149,64,165,160,215,211,122,179,73,100,156,215,185,132,
    152,21,25,228,125,23,87,248,196,16,206,133,10,31,116,217,
    164,50,113,224,47,192,101,153,128,63,3,97,1,67,94,178,
    134,249,73,23,133,116,135,166,255,30,56,249,188,97,19,180,
    52,251,172,50,61,33,57,139,251,60,85,239,137,191,130,191,
    46,101,174,11,27,4,237,87,118,89,120,45,239,87,78,197,
    87,6,209,55,218,147,156,75,196,246,246,43,238,218,21,119,
    23,217,175,42,148,48,33,173,10,88,235,122,57,159,52,127,
    178,128,21,101,254,155,98,199,90,2,203,247,168,249,126,133,
    19,97,198,86,160,228,251,240,246,237,202,215,233,145,210,73,
    225,176,238,91,46,87,123,75,50,42,66,212,12,33,238,85,
    132,144,156,178,95,114,81,78,173,69,145,191,176,4,158,130,
    176,100,161,3,136,3,178,6,125,151,168,195,37,167,40,153,
    37,76,42,163,20,120,105,63,96,231,28,105,183,85,193,215,
    225,165,230,235,149,166,14,138,240,131,36,152,28,71,193,65,
    143,150,164,117,67,195,53,203,24,209,90,54,130,120,34,222,
    102,7,223,254,192,24,243,98,165,105,131,54,151,202,8,230,
    74,148,133,156,43,190,28,201,246,68,78,142,113,241,81,60,
    109,15,146,96,200,145,178,75,35,63,55,70,42,14,245,171,
    251,48,215,48,71,89,59,204,82,204,239,167,161,202,242,118,
    36,241,128,34,35,13,245,203,172,229,178,46,200,135,5,87,
    112,39,103,212,93,121,84,125,60,113,198,88,196,126,105,28,
    162,15,66,85,86,231,90,85,243,6,183,70,60,100,168,153,
    78,95,63,161,230,35,106,190,3,239,34,249,119,105,105,90,
    138,156,231,98,162,169,11,181,125,153,178,95,208,123,111,32,
    238,225,55,33,174,254,112,81,210,215,53,95,60,214,64,174,
    211,9,183,223,160,79,5,52,178,65,156,94,251,95,57,205,
    92,88,57,11,250,255,87,42,123,247,222,169,13,222,143,160,
    220,242,223,70,99,177,108,96,83,211,120,44,76,109,189,108,
    29,159,236,247,222,132,38,63,204,101,160,164,14,218,205,21,
    27,204,137,66,43,240,85,21,58,99,85,117,204,184,95,89,
    118,193,37,207,236,218,82,233,203,145,20,79,177,62,193,242,
    120,206,198,251,150,174,144,23,0,117,42,31,80,30,72,229,
    153,255,154,31,116,13,76,250,4,211,169,76,163,69,125,203,
    79,86,10,3,74,69,180,138,169,59,176,152,189,134,215,235,
    132,36,187,150,204,228,24,214,42,10,174,58,154,12,223,99,
    19,199,14,29,53,22,121,215,163,40,234,76,91,37,89,239,
    103,96,18,111,5,208,72,38,82,201,215,227,163,232,213,242,
    252,23,73,220,142,178,25,30,76,184,192,199,251,196,247,87,
    159,177,127,138,43,60,135,242,80,69,25,219,197,156,93,119,
    234,130,183,196,87,62,122,106,205,104,195,212,213,236,172,240,
    152,228,91,149,245,252,105,206,108,73,140,121,58,132,29,5,
    19,253,69,133,191,18,120,31,82,243,109,227,69,198,171,62,
    223,240,225,65,31,219,16,223,124,112,227,237,217,163,19,60,
    31,72,181,13,143,130,66,162,254,106,171,26,57,148,19,253,
    65,137,143,216,165,165,73,22,158,200,168,28,95,204,69,79,
    149,99,228,249,82,22,111,93,175,102,23,142,84,46,135,113,
    129,46,228,245,203,217,37,221,200,121,234,246,27,51,210,242,
    155,43,143,170,46,13,245,81,247,128,79,182,7,216,208,39,
    159,250,86,93,184,22,125,120,180,69,67,52,133,35,54,155,
    117,187,238,214,107,54,70,158,70,118,68,195,174,55,54,133,
    254,223,71,36,52,172,253,70,93,252,23,78,41,107,236,
};

EmbeddedPython embedded_m5_internal_param_CoherentBus(
    "m5/internal/param_CoherentBus.py",
    "/Users/yaowang/Desktop/GitHub/GEM5_DRAMSim2/build/ARM/python/m5/internal/param_CoherentBus.py",
    "m5.internal.param_CoherentBus",
    data_m5_internal_param_CoherentBus,
    2063,
    6288);

} // anonymous namespace
