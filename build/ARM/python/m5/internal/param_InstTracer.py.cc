#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_InstTracer[] = {
    120,156,197,88,221,111,219,84,20,63,215,118,220,58,109,214,
    116,237,58,198,6,4,196,80,52,96,129,241,49,36,166,137,
    193,38,62,196,186,225,0,221,194,132,113,237,155,212,105,98,
    71,246,237,74,80,250,66,39,224,141,63,129,39,30,120,230,
    95,224,255,130,115,206,181,157,180,163,18,18,144,85,241,237,
    245,245,245,249,252,157,143,235,0,242,191,10,94,239,53,0,
    178,183,5,64,136,63,1,3,128,161,128,142,0,33,5,132,
    107,176,91,129,244,77,8,43,240,8,160,99,128,52,224,16,
    39,38,124,101,64,188,204,239,216,48,48,121,69,192,184,10,
    210,130,78,5,182,226,85,176,164,13,187,85,72,191,1,33,
    68,44,224,94,184,0,225,34,60,66,234,56,113,152,224,34,
    132,85,158,56,16,46,241,164,10,227,58,200,37,232,32,241,
    5,232,212,144,212,37,36,117,138,73,253,65,164,66,124,178,
    14,97,141,182,163,44,247,105,167,69,59,153,199,41,166,178,
    82,72,86,135,78,29,194,21,144,117,232,175,66,23,85,170,
    151,239,157,6,105,66,127,13,58,107,32,241,119,26,14,81,
    235,112,149,247,174,243,222,211,229,222,51,188,119,3,58,27,
    32,241,119,70,239,181,161,221,60,131,54,140,254,196,191,38,
    218,16,212,50,14,15,101,154,69,73,236,69,113,55,137,12,
    122,110,211,64,22,15,104,88,200,77,255,1,153,254,55,96,
    187,135,70,110,250,3,64,194,130,228,31,24,112,192,147,3,
    3,198,77,152,8,232,91,16,154,48,65,54,21,18,160,39,
    224,208,128,7,38,109,56,192,209,66,99,61,11,150,210,118,
    239,179,177,52,165,5,56,168,192,164,2,237,123,19,131,22,
    118,29,72,127,133,239,46,48,209,69,38,106,192,4,71,11,
    14,45,56,176,97,11,55,225,82,223,33,245,197,189,9,106,
    138,43,237,166,133,210,110,206,168,75,170,132,81,26,251,67,
    169,86,113,238,141,252,212,31,122,31,199,153,250,60,245,3,
    153,54,171,197,182,36,187,60,242,213,142,203,239,153,100,144,
    225,72,49,189,36,150,106,9,39,221,40,14,189,97,18,238,
    13,164,90,36,98,94,55,26,72,207,227,135,31,15,71,73,
    170,110,165,105,146,186,100,83,94,28,36,126,249,6,89,52,
    24,36,153,108,18,55,102,227,18,121,69,187,187,35,166,72,
    2,176,172,244,114,40,179,32,141,70,10,93,165,41,210,110,
    162,214,36,39,241,144,61,192,161,245,69,134,14,109,141,253,
    100,223,143,123,173,155,50,219,85,201,168,245,97,164,62,218,
    219,110,125,120,235,246,91,222,77,247,198,237,118,52,188,210,
    218,222,139,6,97,235,134,123,187,53,26,171,157,36,110,13,
    223,106,69,177,146,104,161,65,235,184,109,46,227,158,211,196,
    101,63,234,121,17,235,231,237,200,193,72,166,14,173,62,77,
    18,136,186,88,22,182,48,69,83,212,112,86,193,203,20,23,
    140,37,177,25,145,134,1,105,77,232,178,10,60,253,14,236,
    57,116,252,174,1,233,5,66,75,31,127,130,220,139,152,105,
    211,51,131,159,125,70,166,209,171,125,147,48,160,23,39,140,
    48,132,26,238,188,70,78,143,129,97,82,129,190,13,26,62,
    136,58,141,167,116,76,35,110,39,50,6,18,183,96,57,251,
    25,208,214,19,150,2,215,210,95,142,82,140,235,160,28,138,
    88,92,218,64,214,223,51,66,219,77,82,100,147,129,162,118,
    162,44,217,143,217,29,52,231,152,106,163,141,238,142,239,108,
    247,101,160,178,231,112,225,126,178,215,8,252,56,78,84,195,
    15,195,134,175,84,26,109,239,41,153,53,84,210,184,152,49,
    238,220,213,2,107,37,189,241,168,192,22,225,0,177,165,111,
    194,40,80,120,179,198,55,236,143,76,42,196,201,78,18,102,
    184,78,36,122,82,185,149,2,204,59,126,70,28,213,41,156,
    223,40,88,51,56,155,118,1,165,76,14,186,170,202,168,244,
    179,204,99,214,180,206,0,36,74,15,253,193,158,84,180,63,
    83,190,66,9,104,170,153,206,19,130,79,145,210,133,206,164,
    149,23,39,113,56,70,49,163,224,121,146,224,41,6,226,50,
    16,20,207,32,12,23,112,180,161,38,54,68,221,8,172,28,
    124,118,1,192,13,210,31,24,0,34,79,43,8,198,67,76,
    62,77,131,179,7,171,198,225,73,212,57,165,184,231,105,184,
    64,195,51,52,60,91,104,63,39,19,212,142,155,224,50,177,
    53,88,239,192,204,53,52,11,13,55,143,132,216,185,105,136,
    97,174,108,83,168,24,20,80,211,80,49,201,6,233,245,60,
    14,40,8,209,253,20,29,83,244,179,101,220,58,105,108,23,
    192,117,9,141,179,144,236,205,64,210,37,167,48,30,221,167,
    79,178,98,227,137,89,177,167,173,248,58,177,93,206,209,83,
    99,212,84,69,64,174,55,102,83,214,77,156,140,207,146,61,
    103,45,121,22,139,223,86,92,227,42,198,149,144,235,187,78,
    37,218,192,122,98,17,206,186,38,108,228,213,41,163,228,57,
    74,147,111,199,141,164,219,80,80,200,112,237,98,118,249,98,
    246,46,230,134,198,117,206,54,58,59,232,248,79,229,40,197,
    56,119,248,70,199,171,199,177,235,229,229,5,45,78,149,158,
    29,197,118,230,52,144,97,10,192,12,53,79,35,87,75,35,
    147,204,87,137,103,149,45,108,194,89,188,170,130,5,243,18,
    206,148,220,110,240,83,188,222,39,91,147,186,18,168,193,115,
    219,90,108,214,136,116,115,155,71,240,50,31,125,220,151,145,
    193,123,69,180,217,80,162,131,46,147,36,166,0,248,17,184,
    31,19,240,3,16,18,208,225,121,200,112,112,210,69,14,93,
    163,237,95,3,39,158,191,169,127,134,14,61,35,79,77,24,
    153,217,85,222,170,203,225,39,240,211,76,214,58,52,65,80,
    169,50,243,142,107,182,84,89,101,176,50,132,254,81,57,178,
    142,68,181,123,174,12,92,179,12,220,105,230,43,91,36,204,
    70,115,130,213,162,230,230,145,224,183,166,160,162,164,127,94,
    172,25,51,80,121,133,134,87,75,148,136,98,237,255,151,241,
    57,56,185,80,121,58,51,82,42,201,44,22,125,197,86,103,
    241,63,191,238,125,112,231,211,59,155,237,25,122,101,100,84,
    138,200,184,82,70,134,228,204,253,136,251,114,26,13,194,192,
    161,33,240,144,131,125,11,157,47,44,144,21,232,216,20,67,
    220,118,138,60,196,68,145,210,40,21,30,41,11,108,167,77,
    109,193,18,6,218,209,52,124,59,207,20,66,190,190,54,240,
    135,219,161,127,253,46,113,36,182,65,17,116,70,161,67,125,
    86,7,10,24,113,146,26,124,251,90,161,203,195,121,166,15,
    42,49,165,14,28,51,97,18,112,206,248,124,71,54,134,114,
    184,141,188,119,162,81,163,59,240,123,236,39,51,215,241,78,
    161,163,98,71,31,47,198,220,199,108,38,141,32,65,126,233,
    94,160,146,180,17,74,60,162,200,80,99,254,104,244,114,103,
    231,167,189,140,155,184,221,125,154,206,219,167,30,158,56,35,
    108,99,63,43,236,161,79,66,101,110,231,110,85,7,16,214,
    71,60,102,168,177,206,98,111,211,112,137,134,151,224,9,148,
    128,22,121,131,56,145,233,108,204,55,142,80,36,215,116,215,
    93,122,43,123,60,102,111,254,147,152,213,159,36,242,200,181,
    65,46,208,145,151,190,56,84,242,47,14,24,197,246,191,141,
    98,134,255,188,129,191,245,159,6,175,123,229,73,170,224,190,
    1,121,177,63,41,112,13,152,233,193,175,234,192,213,126,193,
    150,96,188,62,211,24,178,186,98,11,235,55,54,143,19,110,
    43,61,67,247,143,83,39,114,69,230,115,255,58,14,177,220,
    247,142,227,77,55,136,4,13,127,52,146,113,56,109,254,248,
    201,60,77,69,17,122,31,166,101,25,59,189,117,188,30,135,
    44,105,53,163,36,67,179,82,130,244,252,19,240,240,215,101,
    54,90,58,146,141,92,114,161,206,63,101,234,209,153,136,157,
    66,181,59,148,3,169,228,99,126,225,228,144,159,137,66,137,
    217,57,25,99,183,206,109,47,222,15,60,111,238,25,236,29,
    100,240,101,225,30,202,96,182,112,44,71,112,121,56,246,5,
    80,139,69,218,233,14,111,156,185,12,255,149,82,115,254,80,
    85,228,103,198,57,29,75,54,253,161,254,192,192,167,102,247,
    5,26,94,44,140,199,32,213,45,63,55,212,250,32,131,152,
    230,163,12,151,42,151,142,180,138,184,104,5,80,81,253,53,
    133,247,150,119,156,140,21,17,62,161,113,98,179,167,178,23,
    101,104,15,166,87,190,155,71,13,25,67,81,51,123,220,111,
    71,94,157,183,143,116,215,163,15,115,215,249,236,70,114,210,
    39,13,103,197,17,182,65,223,213,76,81,21,53,97,137,229,
    154,99,58,182,83,49,209,143,180,178,38,170,166,83,93,22,
    231,208,167,85,227,156,227,136,191,0,61,137,27,163,
};

EmbeddedPython embedded_m5_internal_param_InstTracer(
    "m5/internal/param_InstTracer.py",
    "/Users/yaowang/Desktop/GitHub/GEM5_DRAMSim2/build/ARM/python/m5/internal/param_InstTracer.py",
    "m5.internal.param_InstTracer",
    data_m5_internal_param_InstTracer,
    1982,
    5955);

} // anonymous namespace
