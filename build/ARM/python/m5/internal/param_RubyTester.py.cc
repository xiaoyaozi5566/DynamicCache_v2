#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyTester[] = {
    120,156,197,89,95,115,27,73,17,239,217,149,100,75,182,98,
    249,127,252,39,137,238,184,128,234,128,8,2,119,185,130,84,
    234,194,37,28,71,149,125,97,125,224,156,56,110,111,189,59,
    178,86,150,118,197,238,40,62,81,246,11,78,1,197,11,31,
    129,39,30,120,230,43,240,149,120,134,238,158,157,181,236,200,
    151,212,1,138,237,157,154,237,237,237,158,238,254,117,79,239,
    216,135,236,167,136,215,251,117,128,244,207,2,32,192,63,1,
    61,128,190,128,150,0,33,5,4,203,112,84,132,228,135,16,
    20,225,57,64,203,2,105,193,25,78,108,248,181,5,209,60,
    191,83,130,158,205,20,1,163,10,200,2,180,138,176,31,45,
    66,65,150,224,168,2,201,23,32,132,136,4,60,13,102,32,
    152,133,231,40,29,39,101,22,56,11,65,133,39,101,8,230,
    120,82,129,81,13,228,28,180,80,248,12,180,170,40,234,109,
    20,117,141,69,253,147,68,5,248,100,5,130,42,177,227,90,
    62,37,206,2,113,178,142,107,44,101,193,172,172,6,173,154,
    153,47,66,107,209,204,151,160,181,100,230,203,208,90,54,243,
    21,104,173,152,249,42,180,86,205,124,13,90,107,102,190,14,
    173,117,8,22,64,174,66,247,58,180,209,77,181,124,45,27,
    32,109,232,110,66,107,19,36,254,109,192,25,122,50,88,100,
    222,45,230,93,202,121,183,153,247,6,180,110,128,196,191,109,
    205,91,130,189,198,42,198,37,252,55,254,52,48,46,160,230,
    113,120,38,147,52,140,35,55,140,218,113,104,209,243,18,13,
    20,69,159,134,153,44,156,31,80,56,255,14,28,203,192,202,
    194,121,10,40,88,208,250,123,22,156,242,228,212,130,81,3,
    78,4,116,11,16,216,112,130,106,138,180,128,67,1,103,22,
    124,102,19,195,41,142,5,12,192,77,40,40,29,203,46,7,
    64,75,154,129,211,34,156,20,97,239,233,137,69,132,163,50,
    36,127,131,223,109,179,208,89,22,106,193,9,142,5,56,43,
    192,105,9,246,145,9,73,221,50,153,47,158,158,160,165,72,
    217,107,20,112,181,187,99,230,146,41,65,152,68,94,95,170,
    69,156,187,3,47,241,250,174,51,60,24,125,34,83,37,147,
    70,197,176,197,233,157,129,167,58,14,191,103,147,67,250,3,
    197,242,226,72,170,57,156,180,195,40,112,251,113,48,236,73,
    53,75,194,220,118,216,147,174,203,15,63,234,15,226,68,61,
    78,146,56,113,200,167,76,236,197,94,254,6,121,212,239,197,
    169,108,144,54,86,227,144,120,69,220,237,1,75,164,5,240,
    90,233,229,64,166,126,18,14,20,134,74,75,36,110,146,214,
    160,32,241,144,126,134,67,243,151,41,6,180,57,242,226,99,
    47,58,108,62,146,233,145,138,7,205,15,67,245,179,225,65,
    243,195,199,59,239,184,143,156,135,59,123,97,255,110,243,96,
    24,246,130,230,67,103,167,57,24,169,78,28,53,251,239,52,
    195,8,253,16,121,189,230,101,223,220,65,158,37,210,114,28,
    30,186,33,219,231,118,100,111,32,147,50,81,55,105,5,162,
    38,230,69,73,216,162,33,170,56,43,226,101,139,109,107,78,
    236,134,100,161,79,86,19,186,10,6,79,255,0,142,28,6,
    254,200,130,100,155,208,210,197,63,65,225,69,204,236,209,51,
    139,159,253,130,92,163,169,93,155,48,160,137,39,140,48,132,
    26,114,222,167,160,71,192,48,41,66,183,4,26,62,136,58,
    141,167,100,68,35,178,147,24,11,133,23,96,62,253,11,160,
    175,79,120,21,72,75,254,122,81,98,84,3,85,166,42,128,
    164,53,84,253,123,70,232,94,131,12,217,101,160,168,78,152,
    198,199,17,135,131,230,156,83,123,232,163,39,163,143,15,186,
    210,87,233,45,36,124,26,15,235,190,23,69,177,170,123,65,
    80,247,148,74,194,131,161,146,105,93,197,245,219,41,227,206,
    89,52,88,203,229,141,6,6,91,132,3,196,150,190,9,66,
    95,225,205,50,223,112,60,82,169,16,39,157,56,72,145,78,
    34,14,165,114,138,6,204,29,47,37,141,234,26,206,31,26,
    213,12,206,70,201,64,41,149,189,182,170,48,42,189,52,117,
    89,53,209,25,128,36,233,153,215,27,74,69,252,169,242,20,
    174,128,166,90,233,52,33,120,157,140,54,54,147,85,110,20,
    71,193,8,151,25,250,111,208,10,174,51,16,231,129,160,184,
    138,48,156,193,177,4,85,177,38,106,150,95,200,192,87,50,
    0,92,35,251,129,1,32,178,178,130,96,60,195,226,211,176,
    184,122,176,105,156,158,36,157,75,138,179,69,195,54,13,55,
    104,184,105,172,159,146,11,170,151,93,112,135,212,90,108,183,
    111,103,22,218,198,194,221,11,41,182,113,158,98,88,43,247,
    40,85,44,74,168,243,84,177,201,7,201,131,44,15,40,9,
    49,252,148,29,231,232,103,207,56,53,178,184,100,128,235,16,
    26,199,33,121,56,6,73,135,130,194,120,116,54,175,242,98,
    253,181,121,241,80,123,241,251,164,118,62,67,79,149,81,83,
    17,62,133,222,26,47,89,143,112,50,90,39,127,142,123,114,
    29,55,191,253,168,202,187,24,239,132,220,51,232,82,162,29,
    172,39,5,194,89,219,134,181,108,119,74,169,120,14,146,248,
    203,81,61,110,215,21,152,53,220,191,157,222,185,157,254,24,
    107,67,253,1,87,27,93,29,116,254,39,114,144,96,158,151,
    249,70,231,171,203,185,235,102,219,11,122,156,118,122,14,20,
    251,153,203,64,138,37,0,43,212,52,157,92,201,157,76,107,
    190,71,58,43,236,97,27,214,241,170,8,94,152,27,115,165,
    228,118,131,159,226,245,19,242,53,153,43,129,154,70,103,79,
    47,155,45,34,219,156,198,5,188,76,199,30,231,219,168,224,
    125,147,109,37,200,209,65,151,77,43,166,4,248,35,112,63,
    38,224,15,64,72,192,128,103,41,195,201,73,23,5,116,153,
    216,63,7,46,60,19,246,63,75,167,158,149,149,38,204,204,
    244,30,179,234,237,240,231,240,167,177,170,117,102,131,160,173,
    202,206,58,174,241,173,170,144,39,43,67,232,149,182,163,194,
    133,172,118,54,242,196,181,243,196,61,175,124,121,139,132,213,
    104,74,176,154,213,218,92,90,248,227,115,80,81,209,223,18,
    203,214,24,84,190,67,195,119,115,148,8,67,251,255,175,241,
    22,92,189,81,185,186,50,82,41,73,11,188,244,133,18,231,
    202,185,136,60,25,138,38,25,238,230,201,32,185,88,63,231,
    86,156,70,139,194,126,102,9,252,86,194,86,133,62,83,10,
    32,139,208,42,81,218,112,167,41,178,172,18,166,138,81,245,
    187,176,19,176,107,118,181,211,242,200,235,216,210,240,229,52,
    171,6,133,247,126,207,235,31,4,222,131,125,210,72,106,125,
    147,103,150,177,161,54,110,3,229,136,184,202,12,190,253,158,
    177,229,217,52,43,6,237,42,185,13,156,38,65,236,115,153,
    248,164,35,235,125,217,63,64,221,157,112,80,111,247,188,67,
    142,147,157,217,248,177,177,81,113,160,47,239,191,220,186,236,
    198,117,63,142,176,176,15,125,21,39,245,64,226,87,137,12,
    52,204,47,38,44,55,115,94,114,152,114,223,118,116,76,211,
    105,199,212,197,143,204,16,59,215,167,198,31,250,227,39,47,
    231,220,160,234,156,193,45,17,191,44,212,72,23,174,119,105,
    120,155,134,111,194,107,168,250,77,84,240,43,210,68,174,43,
    97,137,41,11,85,187,144,173,79,232,173,244,197,156,253,215,
    171,228,172,62,217,200,50,183,68,156,114,134,62,116,105,44,
    83,229,111,85,12,113,142,199,121,38,86,13,241,26,143,11,
    76,172,25,226,34,143,75,76,92,54,196,21,30,87,153,184,
    102,136,235,60,94,103,226,134,33,110,242,184,197,196,109,67,
    188,193,227,77,38,222,50,71,55,117,38,190,1,173,55,233,
    12,131,40,223,160,178,51,243,223,150,29,206,215,105,103,234,
    231,255,211,106,227,220,125,157,38,56,63,128,172,33,185,170,
    210,136,113,251,170,186,210,116,133,105,251,199,141,227,19,135,
    245,9,144,119,253,68,122,74,234,136,109,77,215,92,174,100,
    90,255,23,121,220,140,77,249,247,207,189,220,174,51,110,199,
    70,43,99,77,57,135,81,236,99,239,132,141,251,9,155,238,
    90,186,119,63,7,103,33,247,192,10,14,145,60,118,47,123,
    65,55,231,180,28,111,48,144,81,112,222,120,243,147,105,66,
    128,74,37,125,180,154,150,8,187,236,21,188,94,76,69,178,
    106,204,72,14,96,49,79,190,41,135,146,145,27,153,32,54,
    222,130,241,109,193,161,16,234,141,32,223,3,156,31,229,65,
    185,49,9,150,209,176,239,250,131,97,74,31,119,47,225,192,
    246,140,119,39,67,80,223,154,196,30,72,47,232,197,254,145,
    171,58,137,76,59,113,47,96,209,175,202,75,74,232,244,236,
    197,71,106,107,146,136,116,132,55,125,86,241,85,207,73,44,
    31,201,240,173,170,79,204,208,142,68,125,237,222,48,237,176,
    188,151,50,145,80,58,114,28,163,169,219,147,94,58,246,142,
    228,112,224,182,19,249,219,161,140,252,17,139,127,53,78,210,
    65,17,189,252,96,178,67,121,37,169,171,98,215,143,251,131,
    158,84,242,106,231,79,224,53,206,127,241,145,122,119,146,8,
    62,219,68,40,124,132,157,213,19,158,199,81,132,31,168,116,
    76,238,199,195,72,177,246,175,249,42,45,134,142,146,94,202,
    249,213,10,30,121,202,251,154,107,187,250,213,203,107,187,146,
    147,203,12,111,8,129,100,23,95,86,198,193,205,78,130,2,
    164,39,241,200,117,245,199,62,222,247,92,119,234,77,220,123,
    168,224,55,164,137,142,156,168,137,43,97,27,183,122,233,183,
    92,40,11,238,153,47,253,39,68,47,148,62,119,245,151,238,
    40,117,120,139,93,200,171,16,31,216,155,166,149,247,28,58,
    158,217,245,250,250,160,149,79,15,157,55,105,120,203,20,50,
    206,92,125,244,193,7,11,250,64,7,247,23,62,210,225,254,
    221,161,163,61,62,82,214,38,237,233,60,39,181,146,234,213,
    142,236,199,201,104,39,14,164,162,114,249,240,0,61,237,249,
    74,147,221,103,146,190,10,120,215,210,175,95,124,206,199,186,
    9,122,90,178,64,205,130,143,244,185,53,159,229,105,218,7,
    84,177,100,144,209,207,121,49,16,25,141,86,158,191,201,253,
    242,165,110,129,145,144,200,195,144,110,88,68,206,158,109,161,
    239,93,89,203,199,95,157,54,108,244,183,168,62,85,123,192,
    135,104,63,197,129,206,150,203,11,101,81,178,232,31,28,182,
    168,136,170,40,136,249,106,217,46,151,202,69,27,161,69,148,
    101,81,177,203,149,121,113,241,119,3,33,86,177,54,150,202,
    226,63,47,68,236,55,
};

EmbeddedPython embedded_m5_internal_param_RubyTester(
    "m5/internal/param_RubyTester.py",
    "/Users/yaowang/Desktop/GitHub/GEM5_DRAMSim2/build/ARM/python/m5/internal/param_RubyTester.py",
    "m5.internal.param_RubyTester",
    data_m5_internal_param_RubyTester,
    2390,
    7470);

} // anonymous namespace
