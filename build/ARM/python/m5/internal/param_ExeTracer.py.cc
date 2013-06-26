#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_ExeTracer[] = {
    120,156,197,88,109,115,219,68,16,222,147,100,37,114,226,198,
    105,210,132,210,0,230,165,140,135,151,26,202,75,25,232,116,
    40,180,195,203,208,180,200,48,41,134,65,40,210,217,145,99,
    75,30,233,210,212,140,243,133,116,128,111,252,4,62,241,129,
    207,252,5,254,23,236,238,73,178,147,210,25,102,0,227,177,
    110,78,167,211,222,237,238,243,236,238,41,128,252,87,193,235,
    221,6,64,246,158,0,8,241,47,96,0,48,20,208,17,32,
    164,128,112,13,246,43,144,190,14,97,5,30,0,116,12,144,
    6,28,99,199,132,47,13,136,151,249,29,27,6,38,143,8,
    24,87,65,90,208,169,192,78,188,10,150,180,97,191,10,233,
    55,32,132,136,5,220,13,23,32,92,132,7,40,29,59,14,
    11,92,132,176,202,29,7,194,37,238,84,97,92,7,185,4,
    29,20,190,0,157,26,138,122,1,69,157,97,81,191,147,168,
    16,159,172,67,88,163,233,184,151,47,104,166,69,51,121,141,
    51,44,101,165,216,89,29,58,245,162,191,10,157,85,8,87,
    64,214,161,127,22,186,168,94,189,148,177,6,210,132,254,58,
    116,214,65,226,127,13,142,209,2,225,42,207,61,199,115,207,
    150,115,55,120,238,38,116,54,65,226,127,67,207,181,161,221,
    60,135,246,140,254,192,95,19,237,9,106,25,155,123,50,205,
    162,36,246,162,184,155,68,6,61,183,169,33,235,7,212,44,
    228,110,120,159,220,240,43,176,15,66,35,119,195,17,160,96,
    65,251,31,24,112,196,157,35,3,198,77,152,8,232,91,16,
    154,48,193,101,42,180,129,158,128,99,3,190,50,105,194,17,
    182,22,26,238,73,176,148,246,65,159,13,167,37,45,192,81,
    5,38,21,104,223,157,24,52,176,239,64,250,11,124,187,197,
    66,23,89,168,1,19,108,45,56,182,224,200,134,29,156,132,
    67,125,135,212,23,119,39,168,41,142,180,155,22,238,118,123,
    70,93,82,37,140,210,216,31,74,85,199,190,55,242,83,127,
    232,221,188,47,63,75,253,64,166,205,106,49,43,201,46,141,
    124,181,231,242,107,38,217,99,56,82,44,46,137,165,90,194,
    78,55,138,67,111,152,132,7,3,169,22,73,150,215,141,6,
    210,243,248,225,71,195,81,146,170,155,105,154,164,46,153,148,
    7,7,137,95,190,65,6,13,6,73,38,155,180,26,47,227,
    146,120,69,179,187,35,150,72,27,224,173,210,203,161,204,130,
    52,26,41,244,148,150,72,179,73,90,147,124,196,77,246,37,
    54,173,207,51,244,103,107,236,39,135,126,220,107,221,144,217,
    190,74,70,173,15,34,245,225,193,110,235,131,155,183,222,240,
    110,184,215,111,181,163,225,229,214,238,65,52,8,91,215,221,
    91,173,209,88,237,37,113,107,248,70,43,138,149,68,3,13,
    90,167,76,115,9,167,156,165,69,14,163,158,23,177,122,222,
    158,28,140,100,234,208,232,227,180,1,81,23,203,194,22,166,
    104,138,26,246,42,120,153,98,203,88,18,219,17,41,24,144,
    210,132,45,171,64,211,111,192,126,67,183,239,27,144,110,17,
    86,250,248,23,228,92,68,76,155,158,25,252,236,83,178,140,
    30,237,155,132,0,61,56,97,124,33,208,112,230,85,114,121,
    12,12,146,10,244,109,208,224,65,204,105,52,165,99,106,113,
    58,137,49,80,184,5,203,217,79,128,166,158,240,46,112,44,
    253,249,164,196,184,14,202,33,238,226,208,6,46,253,29,227,
    179,221,36,69,182,25,39,106,47,202,146,195,152,189,65,125,
    102,84,27,109,116,103,124,123,183,47,3,149,61,133,3,95,
    36,7,141,192,143,227,68,53,252,48,108,248,74,165,209,238,
    129,146,89,67,37,141,139,25,195,206,93,45,160,86,202,27,
    143,10,104,17,12,16,90,250,38,140,2,133,55,107,124,195,
    254,200,164,66,152,236,37,97,134,227,36,162,39,149,91,41,
    176,188,231,103,180,162,58,131,253,235,197,210,140,205,166,93,
    32,41,147,131,174,170,50,40,253,44,243,120,105,26,103,252,
    145,164,123,254,224,64,42,154,159,41,95,225,14,168,171,23,
    157,35,2,31,35,157,11,149,73,41,47,78,226,112,140,187,
    140,130,167,105,3,143,49,14,151,129,144,120,14,81,184,128,
    173,13,53,177,33,234,70,96,229,216,179,11,252,109,144,250,
    192,254,23,121,76,65,44,30,99,228,105,26,28,58,88,51,
    38,39,73,231,120,226,94,160,102,139,154,39,168,121,178,80,
    126,62,22,168,157,182,192,37,90,213,96,181,3,51,87,208,
    44,20,220,62,65,176,243,83,130,97,156,108,19,81,12,162,
    211,148,40,38,153,32,189,150,179,128,40,136,206,39,110,76,
    177,207,134,113,41,122,50,122,24,182,46,97,113,22,144,189,
    25,64,186,228,19,70,163,251,248,163,140,216,248,191,140,216,
    211,70,124,149,86,93,206,177,83,99,204,84,69,64,142,55,
    102,227,213,13,236,140,55,201,156,179,134,220,196,188,183,19,
    215,56,129,113,18,228,52,175,227,136,182,175,238,88,132,178,
    174,9,27,121,98,202,40,114,142,210,228,254,184,145,116,27,
    10,138,61,92,189,152,93,186,152,189,131,129,161,113,141,67,
    141,14,13,154,252,169,28,165,72,114,135,111,52,89,61,38,
    174,151,167,22,52,56,37,121,246,19,155,153,99,64,134,252,
    199,240,52,71,27,87,75,27,211,150,175,208,146,85,54,176,
    9,155,120,85,5,239,203,75,56,74,114,161,193,79,241,122,
    143,76,77,218,74,160,50,207,109,235,93,179,66,164,154,219,
    60,129,150,185,168,227,190,136,242,223,45,168,102,67,137,13,
    186,76,218,48,161,255,7,224,66,76,192,247,64,56,64,119,
    231,124,97,102,210,69,238,92,163,233,95,3,7,157,191,72,
    125,134,230,157,145,135,37,164,101,118,133,167,234,76,248,49,
    252,56,19,177,142,77,16,148,165,204,188,212,154,205,82,86,
    201,84,6,208,223,202,68,214,9,74,187,231,75,214,154,37,
    107,167,81,175,44,142,48,20,205,7,84,139,122,49,143,246,
    125,115,10,41,138,247,23,196,154,49,3,148,151,168,121,185,
    196,136,40,198,254,243,45,62,5,143,78,81,158,14,138,20,
    70,50,139,119,190,98,43,74,66,252,186,247,254,237,79,110,
    111,183,167,226,74,86,84,10,86,92,46,89,33,57,102,63,
    224,106,156,90,131,0,112,108,8,60,230,96,189,66,39,12,
    11,100,5,58,54,241,135,171,77,145,211,75,20,209,140,162,
    224,137,132,192,86,218,214,246,43,49,160,189,76,205,253,57,
    70,15,114,244,213,129,63,220,13,253,107,159,210,130,180,106,
    80,16,206,40,84,168,207,170,64,100,17,143,210,130,111,95,
    41,84,185,55,199,200,65,185,165,84,129,233,18,38,1,135,
    139,207,246,100,99,40,135,187,184,244,94,52,106,116,7,126,
    143,189,100,230,42,222,46,84,84,236,230,211,73,152,203,151,
    237,164,17,36,49,134,247,131,64,37,105,35,148,120,46,145,
    161,198,251,73,226,114,61,231,167,189,140,75,183,253,67,234,
    206,217,163,30,30,50,35,172,93,221,194,28,250,244,83,6,
    117,46,81,53,121,48,47,226,217,66,141,117,252,122,147,154,
    23,168,121,30,230,31,251,91,40,255,14,45,68,134,179,49,
    210,56,66,173,96,183,156,116,135,222,201,30,166,235,173,191,
    67,87,253,61,34,39,173,93,124,200,88,0,185,72,7,218,
    78,149,190,12,208,200,18,49,121,225,159,50,153,57,48,103,
    244,223,253,87,9,236,94,254,31,53,112,95,131,60,215,63,
    138,188,98,86,189,154,38,111,95,20,229,244,172,110,124,140,
    223,120,24,71,94,144,74,95,73,237,174,11,115,85,150,67,
    131,94,190,83,58,173,208,168,60,85,92,41,181,58,230,58,
    103,188,62,83,235,178,15,197,14,22,37,88,15,79,88,113,
    207,208,37,241,20,152,86,169,63,153,50,150,135,222,41,27,
    232,146,151,118,227,143,70,50,14,167,229,44,63,153,163,251,
    41,244,208,26,69,169,129,181,235,58,94,15,147,144,116,154,
    81,145,189,87,41,105,55,95,63,50,104,191,41,60,216,164,
    83,197,52,202,186,228,63,29,87,203,144,234,190,13,69,152,
    45,97,25,202,129,84,242,180,103,244,135,51,29,164,67,137,
    137,39,25,227,9,132,107,121,188,31,120,222,188,163,243,91,
    40,127,7,242,179,19,69,103,27,227,179,99,57,130,83,223,
    169,47,154,122,95,116,34,213,133,235,56,115,153,214,43,165,
    230,252,229,173,72,62,140,116,58,107,109,251,67,253,201,132,
    63,4,184,207,80,243,92,97,65,198,169,62,200,240,57,65,
    159,206,16,213,124,62,227,52,236,210,49,157,77,167,53,248,
    8,83,182,86,129,51,137,30,68,245,245,71,35,181,9,167,
    106,194,233,124,206,70,234,217,211,19,74,147,176,103,82,217,
    139,50,52,25,175,56,125,55,231,22,89,76,109,253,69,224,
    153,125,117,206,110,212,21,159,62,194,94,227,19,43,33,146,
    62,227,56,43,142,176,13,250,148,104,138,170,168,9,75,44,
    215,28,211,177,157,138,137,174,166,145,53,81,53,157,234,50,
    206,61,143,110,175,26,231,171,142,248,19,180,45,83,158,
};

EmbeddedPython embedded_m5_internal_param_ExeTracer(
    "m5/internal/param_ExeTracer.py",
    "/Users/yaowang/Desktop/GitHub/GEM5_DRAMSim2/build/ARM/python/m5/internal/param_ExeTracer.py",
    "m5.internal.param_ExeTracer",
    data_m5_internal_param_ExeTracer,
    2047,
    6210);

} // anonymous namespace
