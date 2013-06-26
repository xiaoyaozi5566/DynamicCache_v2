#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Topology[] = {
    120,156,197,88,109,111,35,73,17,174,158,25,59,177,19,111,
    156,247,215,203,26,196,34,235,128,53,44,28,139,96,181,186,
    189,219,213,113,39,54,119,140,15,237,238,128,152,155,120,218,
    206,56,246,140,53,211,217,172,81,242,133,172,128,111,252,4,
    36,36,62,240,25,137,95,112,255,11,170,170,167,39,118,66,
    118,79,2,124,137,221,106,215,212,84,215,203,83,213,213,221,
    129,252,175,132,223,247,27,0,217,95,5,64,136,31,1,3,
    128,161,0,79,128,144,2,194,85,56,46,65,250,35,8,75,
    240,26,192,179,64,90,112,129,19,27,126,109,65,188,200,239,
    148,97,96,51,69,192,184,10,210,1,175,4,207,226,101,112,
    100,25,142,171,144,126,1,66,136,88,192,243,112,14,194,121,
    120,141,210,113,82,97,129,243,16,86,121,82,129,112,129,39,
    85,24,215,65,46,128,135,194,231,192,171,161,168,119,81,212,
    45,22,245,37,137,10,241,201,26,132,53,98,71,93,94,16,
    167,67,156,188,198,45,150,178,100,52,171,131,87,55,243,101,
    240,150,205,124,5,188,21,51,95,5,111,213,204,215,192,91,
    51,243,117,240,214,205,124,3,188,13,51,223,4,111,211,204,
    183,192,219,50,243,109,240,182,33,92,2,185,10,253,29,232,
    162,251,234,133,142,187,32,109,232,239,129,183,7,18,63,187,
    112,129,30,14,151,153,247,29,230,93,41,120,247,153,247,54,
    120,183,65,226,103,95,243,150,161,221,92,199,120,69,255,194,
    191,38,198,11,212,34,14,47,101,154,69,73,236,71,113,55,
    137,44,122,94,166,129,162,219,161,97,46,15,243,135,20,230,
    191,3,199,56,180,242,48,159,3,10,22,164,255,192,130,115,
    158,156,91,48,110,194,153,128,190,3,161,13,103,184,76,137,
    20,232,9,184,176,224,55,54,49,156,227,232,96,96,246,193,
    81,58,198,125,14,140,150,52,7,231,37,56,43,65,251,249,
    153,69,132,227,10,164,127,131,223,237,177,208,121,22,106,193,
    25,142,14,92,56,112,94,134,103,200,132,164,126,133,204,23,
    207,207,208,82,164,180,155,14,106,123,48,97,46,153,18,70,
    105,28,12,165,90,194,185,63,10,210,96,232,127,158,140,146,
    65,210,27,55,171,134,41,201,238,142,2,117,228,242,91,54,
    185,99,56,82,44,45,137,165,90,192,73,55,138,67,127,152,
    132,39,3,169,230,73,148,223,141,6,210,247,249,225,199,195,
    81,146,170,39,105,154,164,46,121,148,137,131,36,40,222,32,
    127,118,6,73,38,155,180,26,47,227,146,120,69,220,221,17,
    75,36,5,88,83,122,57,148,89,39,141,70,10,3,165,37,
    18,55,73,107,82,136,120,200,60,28,90,191,202,48,156,173,
    113,144,156,6,113,175,245,88,102,199,42,25,181,62,138,212,
    207,79,14,91,31,61,121,250,158,255,216,125,244,180,29,13,
    239,181,14,79,162,65,216,122,228,62,109,141,198,234,40,137,
    91,195,247,90,81,172,36,250,103,208,154,246,204,93,228,88,
    161,53,78,163,158,31,177,117,254,145,28,140,100,90,33,234,
    14,173,47,234,98,81,148,133,45,154,162,134,179,18,126,109,
    177,103,45,136,131,136,236,235,144,205,132,44,199,96,233,31,
    192,81,195,160,31,91,144,238,17,82,250,248,17,20,90,196,
    75,155,158,89,252,236,151,228,24,77,237,219,20,127,77,60,
    99,116,33,204,144,243,1,5,60,6,134,72,9,250,101,208,
    208,65,196,105,44,165,99,26,145,157,196,88,40,220,129,197,
    236,207,128,158,62,99,45,144,150,254,101,90,98,92,7,85,
    161,202,128,164,13,92,250,247,140,206,118,147,12,57,96,152,
    168,163,40,75,78,99,14,6,205,57,159,218,232,163,207,198,
    159,30,246,101,71,101,183,145,240,34,57,105,116,130,56,78,
    84,35,8,195,70,160,84,26,29,158,40,153,53,84,210,184,
    147,49,234,220,101,131,180,66,222,120,100,144,69,40,64,100,
    233,31,97,212,81,248,99,149,127,112,60,50,169,16,37,71,
    73,152,33,157,68,244,164,114,75,6,202,71,65,70,43,170,
    91,56,127,100,150,102,104,54,203,6,72,153,28,116,85,149,
    49,25,100,153,207,75,19,157,225,71,146,94,6,131,19,169,
    136,63,83,129,66,13,104,170,23,157,29,0,183,200,100,99,
    49,217,228,199,73,28,142,81,201,168,243,13,90,127,139,97,
    184,8,4,196,117,4,225,28,142,101,168,137,13,81,183,58,
    78,14,189,178,129,223,6,89,15,28,126,145,23,20,132,226,
    5,150,157,166,197,117,131,13,227,212,36,233,92,76,220,93,
    26,246,104,120,135,134,125,99,251,76,28,80,187,234,128,187,
    180,168,197,86,119,236,220,62,219,216,119,48,149,94,219,151,
    233,133,53,178,77,105,98,81,50,93,166,137,77,30,72,31,
    230,57,64,9,136,161,167,204,184,68,62,251,197,173,147,189,
    101,3,90,151,144,56,9,199,222,4,28,93,10,9,99,209,
    221,185,201,135,141,175,201,135,61,237,195,31,208,162,139,57,
    114,106,140,152,170,232,80,216,173,201,98,245,24,39,227,77,
    242,230,164,31,55,113,203,123,22,215,120,239,226,253,143,59,
    8,93,68,180,123,245,196,33,140,117,109,216,200,247,164,140,
    202,230,40,77,94,141,27,73,183,161,192,232,240,224,78,118,
    247,78,246,51,172,10,141,135,92,103,116,93,208,153,159,202,
    81,138,25,94,225,31,58,83,125,206,90,63,223,86,208,223,
    180,191,115,152,216,203,92,0,50,76,126,172,77,179,115,113,
    181,112,49,105,124,159,86,172,178,127,109,216,196,111,85,176,
    90,126,194,21,146,91,12,126,138,223,15,200,211,100,172,4,
    106,32,221,182,86,154,237,33,203,220,230,20,86,102,97,141,
    251,29,20,255,190,201,179,50,20,200,160,175,77,250,18,244,
    255,8,220,129,9,248,3,16,10,48,216,121,178,112,90,210,
    151,130,185,74,236,191,5,46,56,255,97,215,179,116,210,89,
    121,73,194,156,204,238,51,171,222,4,63,129,63,77,84,171,
    11,27,4,109,80,118,222,99,77,110,80,78,145,166,12,159,
    175,180,9,57,83,249,236,110,23,41,107,23,41,123,89,241,
    138,182,8,235,208,76,32,53,175,215,242,73,237,39,151,128,
    162,82,191,43,86,173,9,152,124,151,134,239,21,8,17,134,
    246,255,214,240,54,220,188,57,249,186,30,82,9,201,28,86,
    124,169,204,38,25,1,69,18,148,76,18,220,43,146,64,114,
    129,126,205,109,55,141,22,5,252,194,18,120,94,194,214,132,
    142,42,14,200,18,120,101,74,23,238,43,69,158,77,194,212,
    46,170,121,83,213,159,221,114,160,29,86,196,92,71,149,134,
    87,179,171,21,228,133,7,131,96,120,24,6,15,95,208,122,
    180,104,199,228,151,101,44,168,79,90,64,185,33,110,50,130,
    127,126,223,88,242,114,118,117,130,246,145,194,2,78,142,48,
    233,112,113,248,252,72,54,134,114,120,136,43,31,69,163,70,
    119,16,244,56,70,118,110,225,167,198,66,197,65,190,186,223,
    114,163,114,144,52,58,73,140,165,252,164,163,146,180,17,74,
    60,127,200,80,195,123,58,77,185,113,11,210,94,198,61,218,
    241,41,77,103,27,79,31,143,146,17,246,168,158,241,134,62,
    228,20,5,156,91,81,157,43,184,5,226,25,66,141,117,177,
    250,49,13,239,210,240,109,152,121,157,111,161,248,231,180,14,
    185,173,140,101,165,34,88,81,195,243,25,189,145,93,207,212,
    127,126,149,76,213,119,26,121,190,150,137,83,206,209,81,150,
    198,10,85,122,175,106,136,11,60,46,50,177,102,136,183,120,
    92,98,98,221,16,151,121,92,97,226,170,33,174,241,184,206,
    196,13,115,235,178,201,196,45,190,93,40,51,101,135,170,197,
    220,127,91,45,56,209,102,155,98,95,252,79,139,132,123,239,
    235,51,192,253,33,228,221,195,77,5,66,76,90,87,211,5,
    162,47,76,119,62,105,26,95,9,172,95,67,171,223,73,101,
    160,164,142,213,238,44,77,229,226,163,87,63,44,34,102,236,
    41,142,40,247,11,155,46,184,111,26,175,77,116,206,28,64,
    241,12,155,28,236,174,207,216,108,223,210,13,246,37,40,157,
    194,122,186,158,136,229,169,63,237,1,221,63,147,50,193,104,
    36,227,240,178,55,230,39,179,11,61,213,182,35,184,236,92,
    176,17,94,195,239,245,244,35,139,38,12,228,208,149,138,132,
    155,105,16,25,175,67,19,190,38,123,173,168,226,46,5,79,
    215,237,162,100,187,63,45,194,177,119,29,140,184,144,63,136,
    226,227,140,142,94,111,102,192,30,138,207,57,5,69,237,92,
    103,79,19,236,95,83,45,237,13,143,73,22,85,186,252,55,
    119,106,87,88,71,41,45,132,27,108,87,159,11,223,202,67,
    50,233,188,54,73,84,251,215,95,154,184,182,99,185,111,97,
    65,177,110,237,6,239,201,87,111,241,222,37,131,241,94,65,
    97,244,113,125,8,229,64,42,121,37,73,20,69,49,63,189,
    163,58,42,77,198,120,178,228,67,26,254,30,248,254,140,183,
    226,159,208,202,144,95,209,208,86,92,198,205,120,189,248,175,
    56,21,193,253,206,149,219,106,173,96,3,204,217,100,156,185,
    92,103,151,10,80,242,181,170,105,57,184,248,144,155,14,130,
    161,190,16,227,123,30,247,155,52,124,203,224,154,107,135,62,
    170,242,81,80,31,191,177,208,240,1,156,123,47,151,174,97,
    248,6,228,131,32,139,58,31,199,234,23,232,116,255,165,164,
    86,141,235,146,54,113,242,169,90,158,38,187,12,78,190,148,
    214,84,244,155,190,66,156,160,49,39,191,189,98,22,211,239,
    153,181,10,29,158,188,122,147,14,249,83,181,86,144,221,147,
    195,241,135,73,140,145,31,12,80,141,250,212,131,246,56,83,
    114,200,134,23,90,113,187,52,181,227,48,124,82,217,139,50,
    99,72,193,156,151,98,10,171,218,189,14,220,201,23,103,139,
    52,125,252,208,151,39,15,249,174,228,19,28,232,250,176,178,
    84,17,101,139,110,176,109,81,21,53,225,136,197,90,197,174,
    148,43,37,27,209,72,148,85,81,181,43,213,69,113,253,127,
    27,241,89,181,182,81,194,191,1,82,103,45,56,
};

EmbeddedPython embedded_m5_internal_param_Topology(
    "m5/internal/param_Topology.py",
    "/Users/yaowang/Desktop/GitHub/GEM5_DRAMSim2/build/ARM/python/m5/internal/param_Topology.py",
    "m5.internal.param_Topology",
    data_m5_internal_param_Topology,
    2269,
    6951);

} // anonymous namespace
