#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseSimpleCPU[] = {
    120,156,197,88,91,111,219,200,21,62,67,82,180,37,219,177,
    28,59,118,28,59,137,178,155,20,194,182,141,218,180,219,20,
    104,16,108,110,216,166,168,189,41,149,133,179,236,133,165,197,
    177,76,155,34,5,114,28,175,10,251,165,14,218,190,245,39,
    244,169,15,125,238,95,232,239,216,191,210,158,115,134,67,73,
    217,164,88,96,23,182,45,14,14,135,195,51,231,242,157,203,
    176,7,229,95,13,175,79,90,0,197,87,2,32,194,159,128,
    4,96,32,192,23,32,164,128,104,25,14,107,144,255,20,162,
    26,188,1,240,45,144,22,156,33,97,195,111,45,72,231,249,
    29,23,18,155,103,4,140,26,32,29,240,107,176,147,46,129,
    35,93,56,108,64,254,71,16,66,164,2,94,69,51,16,205,
    194,27,228,142,68,157,25,206,66,212,96,162,14,209,28,19,
    13,24,53,65,206,129,143,204,103,192,95,64,86,31,33,171,
    75,204,234,63,196,42,194,39,43,16,45,208,114,148,229,11,
    90,233,208,74,222,227,18,115,89,52,146,53,193,111,26,122,
    9,252,37,67,95,6,255,178,161,151,193,95,54,244,10,248,
    43,134,190,2,254,21,67,175,130,191,106,232,53,240,215,12,
    125,21,252,171,134,94,7,127,221,208,215,192,191,102,232,13,
    240,55,12,189,9,254,166,161,175,131,127,221,208,55,192,191,
    1,209,34,200,38,28,220,132,61,52,125,179,210,175,5,210,
    134,131,91,224,223,2,137,191,22,156,161,119,162,37,94,251,
    1,175,189,92,173,253,144,215,222,6,255,54,72,252,125,168,
    215,186,208,109,95,65,95,199,255,197,191,54,250,26,212,60,
    14,175,101,94,196,89,26,196,233,94,22,91,244,220,165,129,
    144,209,163,97,166,132,200,19,130,200,191,128,241,17,89,37,
    68,78,1,25,11,146,63,177,224,148,137,83,11,70,109,56,
    17,112,224,64,100,195,9,110,83,35,1,250,2,206,44,248,
    157,77,11,78,113,116,208,169,55,192,81,26,31,7,236,84,
    205,105,6,78,107,112,82,131,238,171,19,139,38,14,235,144,
    255,19,254,180,201,76,103,153,169,5,39,56,58,112,230,192,
    169,11,59,184,8,167,14,234,164,190,120,117,130,154,226,76,
    183,237,160,180,219,19,234,146,42,81,156,167,225,64,170,21,
    164,131,97,152,135,131,224,113,88,200,110,60,24,38,242,201,
    139,207,219,13,179,50,43,238,14,67,181,239,241,171,54,217,
    100,48,84,204,50,75,165,154,67,98,47,78,163,96,144,69,
    71,137,84,179,196,47,216,139,19,25,4,252,240,249,96,152,
    229,234,89,158,103,185,71,102,229,201,36,11,171,55,200,168,
    189,36,43,100,155,118,227,109,60,98,175,104,245,222,144,57,
    146,0,44,46,189,28,201,162,151,199,67,133,222,210,28,105,
    53,113,107,147,159,120,40,2,28,58,159,23,232,211,206,40,
    204,142,195,180,223,121,42,139,67,149,13,59,159,198,234,151,
    71,187,157,79,159,109,125,28,60,245,30,109,161,202,247,58,
    187,71,113,18,117,30,121,91,157,225,72,237,103,105,103,240,
    113,39,78,149,68,35,37,157,119,152,231,46,46,187,76,27,
    29,199,253,32,102,21,131,125,153,12,101,94,167,217,107,36,
    132,104,138,121,225,10,91,180,197,2,82,53,188,108,177,105,
    205,137,237,152,148,236,145,226,132,49,199,160,234,223,192,254,
    67,247,31,90,144,111,18,102,14,240,39,200,201,136,156,46,
    61,179,248,217,111,200,58,122,246,192,38,36,232,201,19,198,
    25,2,14,87,62,32,215,167,192,96,169,193,129,11,26,68,
    136,61,141,170,124,68,35,46,39,54,22,50,119,96,190,248,
    59,160,185,79,88,10,156,203,255,49,205,49,109,130,170,83,
    126,193,169,85,220,250,207,140,211,110,155,20,217,102,172,168,
    253,184,200,142,83,246,8,209,28,89,93,180,209,139,209,103,
    187,7,178,167,138,155,56,241,69,118,212,234,133,105,154,169,
    86,24,69,173,80,169,60,222,61,82,178,104,169,172,117,167,
    96,232,121,75,6,110,21,191,209,208,192,139,160,128,240,210,
    55,81,220,83,120,179,204,55,236,143,66,42,132,202,126,22,
    21,56,79,44,250,82,121,53,131,231,253,176,160,29,213,37,
    164,31,153,173,25,159,109,215,160,169,144,201,158,106,48,48,
    195,162,8,120,107,154,103,12,18,167,215,97,114,36,21,173,
    47,84,168,80,2,34,245,166,231,140,194,171,164,183,81,155,
    20,11,210,44,141,70,40,105,220,187,69,66,92,101,44,206,
    3,161,241,10,34,113,6,71,23,22,196,170,104,90,61,167,
    196,159,107,48,184,74,38,0,198,128,40,243,11,226,241,12,
    179,80,219,226,52,194,218,113,144,18,119,206,45,222,6,13,
    155,52,92,167,225,134,49,192,249,89,97,225,109,43,220,165,
    157,45,86,189,103,151,74,218,70,201,237,169,64,91,31,7,
    26,230,205,46,5,140,69,97,53,14,24,155,204,144,63,44,
    163,129,66,17,65,64,49,50,142,1,54,142,215,36,165,93,
    3,95,143,48,57,9,204,254,4,48,61,242,11,163,210,187,
    246,62,67,182,46,210,144,125,109,200,31,211,206,243,37,134,
    22,24,59,13,209,35,0,88,147,185,235,41,18,163,53,50,
    233,164,49,215,176,22,238,164,11,92,212,184,48,114,91,162,
    115,138,182,177,38,28,66,219,158,13,171,101,177,42,40,139,
    14,243,236,203,81,43,219,107,41,48,50,60,184,83,220,189,
    83,252,2,147,68,235,33,167,29,157,38,116,34,200,229,48,
    199,128,175,243,141,14,220,128,131,56,40,75,13,26,157,10,
    63,251,138,77,205,249,160,192,92,128,169,234,156,237,220,168,
    236,76,98,223,167,109,27,108,100,27,214,240,106,8,150,45,
    200,56,107,114,3,194,79,241,122,76,230,38,141,37,80,107,
    234,117,181,228,172,20,169,231,181,167,80,115,110,42,121,223,
    199,61,62,49,97,231,66,133,17,186,108,18,154,34,225,175,
    192,77,154,128,191,0,225,1,221,94,198,14,71,41,93,228,
    214,101,90,254,7,224,36,244,142,114,104,233,24,180,202,52,
    133,33,90,220,231,165,186,58,254,10,254,54,145,193,206,108,
    16,84,185,236,178,13,155,172,92,78,21,181,12,164,111,84,
    157,156,169,240,246,214,171,8,182,171,8,30,103,193,170,105,
    194,180,116,126,224,154,213,27,6,36,251,179,49,180,168,6,
    108,136,101,107,2,48,63,160,225,135,21,86,132,153,59,23,
    49,111,194,251,75,87,160,19,37,165,149,194,97,233,23,93,
    78,78,83,92,170,192,168,153,192,184,87,5,134,228,244,253,
    134,27,117,26,45,242,255,153,37,240,116,134,45,12,29,140,
    28,144,53,240,93,10,33,110,66,69,25,97,194,36,53,218,
    111,170,54,176,129,182,181,233,42,8,104,39,211,240,229,57,
    39,17,242,243,131,36,28,236,70,225,67,138,150,130,118,238,
    153,152,179,140,26,205,73,53,40,94,196,251,52,225,219,31,
    25,117,94,159,115,2,161,82,83,169,193,81,19,101,61,206,
    26,47,247,101,107,32,7,187,184,253,126,60,108,237,37,97,
    159,189,101,151,106,126,102,212,84,236,238,183,235,50,119,53,
    219,89,171,151,165,152,237,143,122,42,203,91,145,196,99,139,
    140,52,228,167,227,151,91,189,48,239,23,220,213,29,30,19,
    121,1,158,13,240,44,26,99,107,27,24,147,232,3,82,149,
    227,185,131,213,241,131,165,18,143,30,106,164,83,217,207,104,
    248,136,134,239,193,197,148,130,14,238,241,123,218,140,12,232,
    98,210,169,11,238,131,166,22,190,160,119,139,175,135,240,211,
    111,18,194,250,211,74,25,200,46,200,25,58,18,211,151,147,
    90,249,229,4,131,218,253,182,65,205,161,112,1,65,32,191,
    211,88,246,238,93,176,22,222,79,160,172,254,239,139,99,11,
    38,186,243,251,58,142,181,119,176,71,24,173,76,244,139,172,
    177,216,193,130,142,61,229,9,119,155,129,165,219,202,177,43,
    185,68,243,167,129,53,28,82,121,28,188,3,120,186,117,36,
    140,132,195,161,76,163,113,91,200,79,206,217,96,20,179,125,
    24,151,106,236,1,87,240,250,58,124,73,183,9,85,25,166,
    181,10,176,27,23,227,234,164,74,81,115,83,41,202,35,95,
    234,164,84,229,35,157,158,216,59,148,118,35,153,72,37,223,
    229,32,213,132,234,228,20,73,76,220,217,8,27,122,110,139,
    241,62,9,130,139,200,108,63,215,230,215,126,162,204,230,138,
    186,83,23,92,60,222,250,108,168,37,187,3,166,3,28,21,
    30,71,195,98,165,63,127,218,50,169,155,97,79,135,151,237,
    112,160,191,71,240,9,219,251,128,134,219,198,132,12,88,125,
    42,224,134,91,31,119,16,226,124,224,225,66,230,209,217,151,
    123,165,177,14,40,61,39,96,61,243,40,31,60,39,61,243,
    163,161,42,212,98,53,143,154,234,207,52,252,221,166,90,251,
    242,215,143,249,59,225,120,34,220,77,228,78,152,28,162,224,
    227,149,221,81,161,228,128,217,201,244,104,16,108,201,65,150,
    143,182,178,72,42,2,196,163,93,116,97,216,83,122,58,120,
    45,169,12,79,242,157,122,206,95,89,114,116,161,156,144,15,
    31,149,242,141,117,121,146,100,189,67,25,149,243,84,18,95,
    228,89,79,226,225,175,220,97,108,136,242,1,227,74,207,60,
    199,126,224,37,110,138,122,16,174,74,75,113,249,98,112,78,
    185,159,145,152,203,126,140,106,230,85,47,58,206,39,4,13,
    213,122,251,45,253,112,234,221,11,192,173,110,21,245,49,248,
    33,159,122,95,226,64,159,132,234,139,117,225,90,244,105,210,
    22,13,177,32,28,49,191,80,183,235,110,189,102,35,182,105,
    102,89,52,236,122,99,94,252,191,255,117,140,129,134,181,94,
    175,139,255,1,42,35,156,248,
};

EmbeddedPython embedded_m5_internal_param_BaseSimpleCPU(
    "m5/internal/param_BaseSimpleCPU.py",
    "/Users/yaowang/Desktop/GitHub/GEM5_DRAMSim2/build/ARM/python/m5/internal/param_BaseSimpleCPU.py",
    "m5.internal.param_BaseSimpleCPU",
    data_m5_internal_param_BaseSimpleCPU,
    2184,
    6480);

} // anonymous namespace
