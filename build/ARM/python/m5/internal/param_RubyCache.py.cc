#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyCache[] = {
    120,156,197,89,95,115,219,198,17,223,3,72,74,164,68,139,
    250,111,89,178,77,39,182,203,58,169,217,186,73,220,105,61,
    158,56,177,39,109,38,86,28,168,173,108,166,83,20,2,78,
    18,40,16,224,0,39,203,204,72,47,149,167,237,91,63,66,
    159,250,144,231,126,133,126,175,118,119,15,7,81,18,149,106,
    166,45,99,19,59,192,98,177,119,187,251,219,189,189,147,15,
    249,191,50,94,31,55,1,178,143,4,64,128,63,1,17,64,
    79,64,71,128,144,2,130,121,216,43,67,250,1,4,101,120,
    11,208,177,64,90,112,140,55,54,124,109,65,60,205,223,84,
    32,178,153,35,96,80,3,89,130,78,25,54,227,89,40,201,
    10,236,213,32,253,3,8,33,98,1,47,131,9,8,38,225,
    45,106,199,155,42,43,156,132,160,198,55,85,8,166,248,166,
    6,131,6,200,41,232,160,242,9,232,212,81,213,61,84,117,
    133,85,253,147,84,5,248,102,1,130,58,137,227,92,94,145,
    100,137,36,121,140,43,172,101,198,204,172,1,157,6,4,51,
    32,27,208,157,133,109,52,169,81,124,55,7,210,134,238,60,
    116,230,65,226,111,14,142,209,234,96,150,101,23,88,118,174,
    144,93,100,217,37,232,44,129,196,223,162,150,173,192,70,107,
    17,125,24,254,11,255,181,208,135,160,166,145,188,150,105,22,
    38,177,27,198,219,73,104,209,251,10,17,242,184,79,100,34,
    119,253,167,228,250,111,129,253,30,88,185,235,143,0,21,11,
    154,127,100,193,17,223,28,89,48,104,193,161,128,110,9,2,
    27,14,113,152,50,77,96,71,192,177,5,191,179,73,224,8,
    105,9,157,117,3,74,74,251,189,203,206,210,154,38,224,168,
    12,135,101,216,120,121,104,17,99,175,10,233,223,225,155,53,
    86,58,201,74,45,56,68,90,130,227,18,28,85,96,19,133,
    144,213,173,146,249,226,229,33,90,138,156,141,86,9,103,187,
    62,100,46,153,18,132,105,236,245,164,106,224,189,219,247,82,
    175,231,58,251,91,131,79,61,127,87,182,106,70,42,201,238,
    247,61,181,235,240,103,54,249,163,215,87,172,46,137,165,154,
    194,155,237,48,14,220,94,18,236,71,82,77,146,46,119,59,
    140,164,235,242,203,95,245,250,73,170,158,165,105,146,58,228,
    82,102,70,137,87,124,65,14,245,163,36,147,45,26,141,135,
    113,72,189,34,233,237,62,107,164,9,240,84,233,227,64,102,
    126,26,246,21,70,74,107,36,105,210,214,162,24,49,201,190,
    70,210,254,77,134,241,108,15,188,228,192,139,119,218,79,101,
    182,167,146,126,251,179,80,253,114,127,171,253,217,179,231,31,
    186,79,157,39,207,55,194,222,131,246,214,126,24,5,237,39,
    206,243,118,127,160,118,147,184,221,251,176,29,198,74,162,131,
    162,246,25,215,220,71,145,57,26,228,32,220,113,67,54,207,
    221,149,81,95,166,85,226,94,163,9,136,134,152,22,21,97,
    139,150,168,227,93,25,47,91,172,89,83,98,61,36,3,125,
    50,154,176,85,50,104,250,7,112,220,48,236,123,22,164,107,
    132,149,46,254,4,5,23,17,179,65,239,44,126,247,21,121,
    70,115,187,54,33,64,51,15,25,95,8,52,148,124,68,33,
    143,129,65,82,134,110,5,52,120,16,115,26,77,233,128,40,
    138,147,26,11,149,151,96,58,251,43,160,171,15,121,22,200,
    75,255,118,90,99,220,0,85,165,124,69,214,18,14,253,71,
    198,231,70,139,12,89,103,156,168,221,48,75,14,98,142,6,
    221,115,70,109,160,143,94,12,190,220,234,74,95,101,55,145,
    241,42,217,111,250,94,28,39,170,233,5,65,211,83,42,13,
    183,246,149,204,154,42,105,222,201,24,118,206,172,129,90,161,
    111,208,55,208,34,24,32,180,244,67,16,250,10,31,230,249,
    129,227,145,73,133,48,217,77,130,12,249,164,98,71,42,167,
    108,176,188,235,101,52,162,186,130,247,79,204,208,140,205,86,
    197,32,41,147,209,182,170,49,40,189,44,115,121,104,226,51,
    254,72,211,107,47,218,151,138,228,51,229,41,156,1,221,234,
    65,199,136,192,171,100,179,49,153,140,114,227,36,14,6,56,
    203,208,191,69,19,184,202,56,156,6,66,226,34,162,112,2,
    105,5,234,98,73,52,44,191,148,99,175,98,240,183,68,230,
    3,199,95,228,53,5,177,120,140,149,167,101,113,233,96,203,
    56,57,73,59,215,19,103,149,200,26,145,235,68,110,24,227,
    199,227,129,250,89,15,220,167,81,45,54,219,183,115,3,109,
    99,224,250,169,4,91,57,73,48,172,147,27,148,40,22,165,
    211,73,162,216,228,130,244,113,158,5,148,130,24,124,202,141,
    19,236,179,99,28,170,158,140,30,134,173,67,88,28,6,228,
    206,16,32,29,138,9,163,209,185,118,145,19,155,223,151,19,
    119,180,19,127,66,163,78,231,216,169,51,102,106,194,167,192,
    91,195,245,234,41,222,12,150,201,157,195,142,92,198,117,111,
    51,174,243,2,198,139,32,47,237,186,142,104,255,234,155,18,
    161,108,219,134,165,124,97,202,168,114,246,211,228,205,160,153,
    108,55,21,152,57,60,186,147,221,191,147,253,2,11,67,243,
    49,151,26,93,26,116,242,167,178,159,98,146,87,249,65,39,
    171,203,137,235,230,75,11,58,156,22,121,142,19,187,153,107,
    64,134,249,143,229,105,140,62,174,21,62,166,41,63,164,33,
    107,236,96,27,150,241,170,9,158,151,155,112,149,228,70,131,
    223,226,245,9,185,154,172,149,64,173,157,179,161,103,205,6,
    145,105,78,235,20,90,198,98,142,243,30,234,255,216,164,90,
    5,10,108,208,101,211,132,9,253,127,6,110,196,4,252,9,
    8,7,24,238,60,95,56,51,233,162,112,206,147,248,239,129,
    139,206,136,165,207,210,121,103,229,101,9,211,50,123,200,162,
    122,37,252,28,254,50,84,177,142,109,16,180,74,217,121,171,
    53,188,74,149,138,76,101,0,93,106,37,42,157,74,105,103,
    165,200,90,187,200,218,147,170,87,52,71,88,138,198,3,170,
    73,61,152,75,243,126,118,2,41,170,247,171,98,222,26,2,
    202,251,68,126,84,96,68,24,222,255,125,138,55,225,226,37,
    202,213,69,145,202,72,86,226,153,207,84,184,187,227,175,159,
    203,94,146,14,138,84,40,155,84,120,80,164,130,228,66,253,
    150,91,112,162,22,69,253,216,18,184,159,193,38,133,182,18,
    37,144,101,232,84,40,105,184,197,20,121,78,9,83,194,168,
    244,157,90,5,216,53,235,218,105,69,224,117,104,137,188,25,
    99,201,160,232,62,138,188,222,86,224,61,126,65,3,210,168,
    190,201,50,203,152,208,24,54,129,50,68,92,100,5,63,254,
    216,152,242,122,140,229,130,22,148,194,4,206,145,32,241,185,
    70,252,122,87,54,123,178,183,133,67,239,134,253,230,118,228,
    237,112,148,236,220,196,47,141,137,138,195,124,118,229,229,158,
    101,61,105,250,73,140,53,125,223,87,73,218,12,36,110,70,
    100,160,65,126,58,91,185,137,243,210,157,140,251,181,189,3,
    186,29,115,68,93,220,89,134,216,176,126,101,220,161,183,60,
    69,37,231,190,84,103,12,46,134,184,161,80,3,93,180,62,
    34,114,143,200,93,24,127,193,111,83,44,104,32,114,92,5,
    203,75,85,168,25,154,140,17,122,65,223,100,231,211,245,3,
    113,137,116,213,7,15,121,210,86,72,82,78,208,222,150,104,
    149,106,126,167,102,152,83,76,167,153,89,55,204,43,76,103,
    152,217,48,204,89,166,115,204,156,55,204,5,166,139,204,92,
    50,204,101,166,87,153,185,98,152,215,152,174,50,115,205,48,
    175,51,189,193,204,155,134,217,100,122,139,153,239,24,230,187,
    76,111,51,243,142,97,222,101,250,3,102,182,204,193,204,15,
    153,121,15,58,239,209,169,7,113,222,167,130,53,241,223,22,
    44,78,245,49,39,249,230,255,180,78,57,15,190,71,11,156,
    159,66,222,199,92,84,163,196,176,121,117,93,163,186,194,108,
    21,134,109,227,35,138,165,243,233,226,250,169,244,148,212,225,
    90,29,171,177,92,1,245,240,175,138,160,25,139,138,29,211,
    195,194,170,99,238,225,6,11,67,125,60,199,80,108,98,195,
    133,189,254,33,27,238,90,186,221,63,1,102,169,176,159,92,
    25,203,3,247,140,15,116,59,79,179,241,250,125,25,7,39,
    173,58,191,25,99,248,169,194,74,56,105,163,176,47,95,192,
    235,124,18,146,77,67,38,114,244,202,69,218,141,55,142,12,
    218,174,137,96,139,122,188,147,197,196,161,248,233,229,163,88,
    57,156,159,23,17,89,29,129,200,8,1,17,251,3,218,10,
    126,231,123,108,231,120,203,146,63,171,187,35,100,113,171,19,
    121,190,236,201,88,185,253,36,10,115,181,151,20,165,17,232,
    140,237,252,43,117,107,132,6,229,237,60,73,83,111,240,137,
    23,239,101,60,206,127,150,162,33,56,113,135,185,234,157,17,
    223,5,158,242,206,168,191,132,24,233,167,245,252,52,91,221,
    190,96,98,190,47,179,236,139,161,0,92,74,144,6,105,228,
    70,12,191,80,215,71,124,29,226,207,167,103,214,255,221,18,
    164,152,118,214,5,71,173,140,144,199,61,119,226,179,182,139,
    223,146,38,74,16,126,82,239,142,144,203,148,151,42,108,141,
    2,249,198,221,194,254,136,244,93,70,142,52,83,31,114,134,
    175,238,92,20,156,115,62,190,156,36,141,51,107,34,121,202,
    203,163,96,144,202,44,217,79,125,185,161,188,40,186,24,45,
    103,196,12,90,78,179,249,148,239,156,27,194,111,116,4,47,
    124,73,202,248,40,19,31,184,178,241,250,19,200,72,42,121,
    182,4,235,211,127,221,116,6,18,27,233,100,224,186,250,64,
    2,159,35,215,29,119,183,249,51,212,255,91,26,136,188,70,
    221,102,5,251,205,197,145,255,171,165,170,224,6,255,204,31,
    107,244,108,151,193,236,201,7,153,67,28,103,166,168,126,252,
    71,5,211,98,243,66,71,96,95,247,122,250,52,152,207,56,
    29,14,219,109,83,64,121,153,210,103,52,124,4,162,15,158,
    112,81,227,163,39,222,108,56,116,2,201,144,212,118,161,253,
    250,232,155,101,139,39,110,168,57,122,67,155,93,142,64,42,
    119,194,12,93,195,58,10,249,124,173,36,199,168,181,81,49,
    31,250,114,204,209,210,27,85,125,220,246,152,79,215,104,150,
    116,228,92,157,169,138,138,69,127,246,176,69,77,212,69,73,
    76,215,171,118,181,82,45,219,24,81,226,204,139,154,93,173,
    77,139,21,140,98,205,90,89,172,138,127,3,9,23,194,92,
};

EmbeddedPython embedded_m5_internal_param_RubyCache(
    "m5/internal/param_RubyCache.py",
    "/Users/yaowang/Desktop/GitHub/GEM5_DRAMSim2/build/ARM/python/m5/internal/param_RubyCache.py",
    "m5.internal.param_RubyCache",
    data_m5_internal_param_RubyCache,
    2352,
    7392);

} // anonymous namespace
