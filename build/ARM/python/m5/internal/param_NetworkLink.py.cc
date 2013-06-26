#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_NetworkLink[] = {
    120,156,197,88,221,115,219,198,17,223,3,64,72,164,68,139,
    250,182,108,199,102,63,156,225,164,173,217,186,77,220,105,61,
    158,184,181,39,77,166,86,28,48,137,108,246,3,133,128,163,
    8,10,4,56,192,73,10,59,212,75,229,105,251,214,63,161,
    79,125,232,115,103,250,23,244,255,106,119,247,0,136,180,164,
    212,51,237,208,18,121,115,88,46,246,246,227,183,123,123,231,
    67,254,87,193,239,135,77,128,236,3,1,16,224,71,64,4,
    48,20,208,21,32,164,128,96,29,14,43,144,254,8,130,10,
    188,2,232,26,32,13,56,195,137,9,191,50,32,94,230,119,
    108,136,76,166,8,24,215,64,90,208,173,192,94,188,10,150,
    180,225,176,6,233,239,64,8,17,11,120,17,44,64,176,8,
    175,80,58,78,170,44,112,17,130,26,79,170,16,44,241,164,
    6,227,6,200,37,232,162,240,5,232,214,81,212,123,40,234,
    26,139,250,23,137,10,240,151,13,8,234,196,142,186,188,36,
    78,139,56,121,141,107,44,101,165,208,172,1,221,6,4,43,
    32,27,48,88,133,30,154,212,40,223,91,3,105,194,96,29,
    186,235,32,241,179,6,103,104,117,176,202,188,27,204,187,86,
    242,110,50,239,22,116,183,64,226,103,83,243,218,208,105,109,
    162,15,195,127,227,95,11,125,8,106,25,135,99,153,102,97,
    18,187,97,220,75,66,131,126,183,105,32,143,251,52,44,228,
    174,255,57,185,254,239,192,126,15,140,220,245,167,128,130,5,
    233,31,25,112,202,147,83,3,198,45,152,8,24,88,16,152,
    48,193,101,42,164,192,129,128,51,3,126,109,18,195,41,142,
    22,58,235,54,88,74,251,125,192,206,210,146,22,224,180,2,
    147,10,116,94,76,12,34,28,86,33,253,27,252,254,22,11,
    93,100,161,6,76,112,180,224,204,130,83,27,246,144,9,73,
    131,42,153,47,94,76,208,82,164,116,90,22,106,187,59,101,
    46,153,18,132,105,236,13,165,90,195,185,59,242,82,111,232,
    238,74,117,146,164,135,191,12,227,195,86,173,224,75,178,123,
    35,79,245,29,126,209,36,143,12,71,138,5,38,177,84,75,
    56,233,133,113,224,14,147,224,40,146,106,145,164,185,189,48,
    146,174,203,63,126,60,28,37,169,122,154,166,73,234,144,83,
    153,24,37,94,249,6,185,212,143,146,76,182,104,53,94,198,
    33,241,138,184,123,35,150,72,10,176,178,244,114,32,51,63,
    13,71,10,99,165,37,18,55,73,107,81,148,120,200,126,131,
    67,251,139,12,35,218,30,123,201,137,23,31,180,159,200,236,
    80,37,163,246,71,161,250,197,209,126,251,163,167,207,222,119,
    159,56,143,159,117,194,225,253,246,254,81,24,5,237,199,206,
    179,246,104,172,250,73,220,30,190,223,14,99,37,209,69,81,
    251,130,115,238,33,19,185,45,59,9,15,220,144,13,116,251,
    50,26,201,180,74,212,27,164,130,104,136,101,97,11,83,180,
    68,29,103,21,252,154,226,150,177,36,118,67,50,209,39,179,
    9,95,86,129,168,127,0,199,14,67,127,104,64,122,139,240,
    50,192,143,160,0,35,106,58,244,155,193,191,125,70,190,209,
    212,129,73,40,208,196,9,99,12,193,134,156,15,41,236,49,
    48,80,42,48,176,65,3,8,113,167,17,149,142,105,68,118,
    18,99,160,112,11,150,179,191,0,58,123,194,90,32,45,253,
    235,172,196,184,1,170,74,57,139,164,45,92,250,15,140,209,
    78,139,12,217,101,164,168,126,152,37,39,49,199,131,230,156,
    85,29,244,209,243,241,167,251,3,233,171,236,14,18,94,38,
    71,77,223,139,227,68,53,189,32,104,122,74,165,225,254,145,
    146,89,83,37,205,187,25,3,207,89,45,192,86,202,27,143,
    10,112,17,16,16,92,250,33,8,125,133,15,235,252,192,241,
    200,164,66,160,244,147,32,67,58,137,56,144,202,169,20,104,
    238,123,25,173,168,174,225,252,113,177,52,163,179,101,23,88,
    202,100,212,83,53,134,165,151,101,46,47,77,116,70,32,73,
    58,246,162,35,169,136,63,83,158,66,13,104,170,23,157,43,
    6,175,147,213,133,209,100,150,27,39,113,48,70,61,67,255,
    27,164,194,117,70,226,50,16,22,55,17,135,11,56,218,80,
    23,91,162,97,248,86,142,62,187,64,224,22,57,0,24,1,
    34,175,44,136,198,51,172,63,45,131,11,8,219,198,9,74,
    210,185,170,56,55,105,184,69,195,59,52,220,46,204,159,151,
    15,234,175,251,224,30,173,107,176,225,190,153,155,104,22,38,
    238,206,36,217,206,121,146,97,189,236,80,178,24,148,82,231,
    201,98,146,19,210,71,121,38,80,26,34,0,40,63,206,241,
    207,174,113,26,100,178,93,64,215,33,60,78,131,242,96,10,
    148,14,69,133,17,233,220,184,202,141,205,183,231,198,3,237,
    198,31,208,186,203,57,126,234,140,155,154,240,41,248,198,116,
    213,122,130,147,241,54,57,116,218,149,219,184,3,238,197,117,
    222,202,120,59,228,77,94,87,19,237,97,61,177,8,105,61,
    19,182,242,45,42,163,250,57,74,147,175,198,205,164,215,84,
    80,232,240,240,110,118,239,110,246,83,44,15,205,71,92,112,
    116,129,208,37,32,149,163,20,83,189,202,15,58,101,93,78,
    95,55,223,98,208,229,180,221,115,164,216,209,92,9,50,172,
    2,88,164,230,234,229,90,233,101,82,250,1,45,90,99,23,
    155,176,141,223,154,96,205,220,132,171,37,55,29,252,43,126,
    127,70,206,38,123,37,80,155,231,116,180,222,108,18,25,231,
    180,102,16,51,39,131,156,239,224,10,31,22,9,103,67,137,
    15,250,154,164,50,229,192,159,128,219,50,1,127,4,194,2,
    134,60,207,26,206,79,250,82,72,215,137,253,183,192,197,231,
    146,77,208,208,217,103,228,229,9,147,51,123,192,172,122,79,
    252,4,254,60,85,185,206,76,16,180,95,153,121,227,53,189,
    95,89,101,190,50,136,222,104,79,178,102,18,219,217,41,115,
    215,44,115,247,188,250,149,141,18,22,164,121,1,107,81,47,
    231,146,230,79,207,97,69,149,255,166,88,55,166,192,242,93,
    26,190,87,226,68,20,180,57,40,121,7,174,222,174,92,93,
    30,169,156,100,22,235,190,98,115,183,55,37,163,76,136,74,
    145,16,247,203,132,144,92,178,95,113,83,78,163,65,145,63,
    51,4,158,112,176,101,161,195,133,5,178,2,93,155,82,135,
    91,78,145,103,150,40,74,25,149,192,153,253,128,157,179,171,
    221,86,6,95,135,151,134,175,230,90,58,40,194,15,35,111,
    184,31,120,143,158,211,146,180,174,95,228,154,81,24,209,152,
    54,130,242,68,92,101,7,63,126,191,48,230,120,174,101,131,
    54,151,210,8,206,149,32,241,185,86,124,222,151,205,161,28,
    238,227,226,253,112,212,236,69,222,1,71,202,204,141,252,180,
    48,82,113,168,95,223,135,185,135,217,77,154,126,18,99,125,
    63,242,85,146,54,3,137,7,20,25,104,168,207,102,45,183,
    117,94,122,144,113,7,119,120,66,211,185,71,213,197,19,103,
    136,77,236,103,133,67,244,65,168,172,234,220,171,234,188,193,
    173,17,15,25,106,172,203,215,7,52,188,71,195,187,240,54,
    138,127,155,226,65,75,145,243,108,44,52,85,161,86,103,83,
    246,57,189,151,93,76,220,127,190,73,226,234,75,137,60,125,
    109,226,148,11,116,238,165,177,74,59,64,183,86,16,151,120,
    92,102,98,189,32,94,227,113,133,137,141,130,184,202,227,26,
    19,215,11,226,6,143,155,76,220,42,174,77,182,153,120,29,
    186,59,116,39,65,148,27,84,60,22,254,215,226,193,73,55,
    247,116,219,251,191,214,12,231,254,91,181,193,249,33,228,189,
    197,85,245,66,76,27,88,215,245,98,32,138,38,126,218,58,
    190,66,184,126,25,108,93,63,149,158,146,58,104,55,231,108,
    48,87,36,173,192,203,50,116,133,85,229,121,230,65,105,217,
    25,247,86,227,141,169,30,155,35,41,246,176,17,194,62,124,
    194,198,187,134,110,197,207,1,106,149,62,160,130,19,203,19,
    247,130,31,116,179,77,250,120,163,145,140,131,243,70,154,127,
    153,43,12,168,230,185,112,222,224,96,215,188,129,223,139,9,
    73,118,77,153,201,49,172,148,41,56,239,104,50,124,131,34,
    142,45,246,93,89,224,29,138,162,46,233,101,53,119,126,82,
    198,229,206,165,216,60,14,83,229,198,82,101,116,96,251,175,
    60,216,112,241,1,169,164,168,119,46,125,35,194,169,27,6,
    44,243,235,57,72,34,149,194,252,89,125,243,114,13,252,204,
    197,29,203,61,198,53,89,232,27,176,145,100,190,143,157,34,
    170,111,93,158,160,125,108,218,101,228,158,160,2,125,150,255,
    38,124,180,0,149,132,25,234,21,154,177,121,17,38,97,236,
    143,191,198,128,25,182,194,128,105,34,3,151,203,76,32,35,
    169,228,197,44,83,4,128,252,186,32,144,216,189,36,99,60,
    199,242,121,16,159,35,215,157,255,6,255,99,92,225,75,200,
    111,134,104,131,183,113,139,223,44,255,171,86,85,112,47,245,
    218,109,185,214,113,27,138,99,208,56,115,184,104,175,148,144,
    230,59,221,162,151,225,26,70,224,220,245,134,250,42,142,175,
    151,28,242,180,243,237,34,43,184,254,232,131,49,159,58,245,
    121,31,235,21,159,248,185,175,115,232,234,71,209,42,218,26,
    180,90,223,59,50,111,249,196,125,203,235,21,159,253,158,202,
    131,48,67,135,176,140,146,63,47,130,228,12,117,251,210,232,
    79,191,59,247,40,233,147,129,190,233,120,196,23,27,164,41,
    221,248,85,87,170,194,54,232,222,217,20,53,81,23,150,88,
    174,87,205,170,93,173,152,24,73,162,172,139,154,89,173,45,
    139,29,140,100,205,216,65,254,255,0,163,124,10,117,
};

EmbeddedPython embedded_m5_internal_param_NetworkLink(
    "m5/internal/param_NetworkLink.py",
    "/Users/yaowang/Desktop/GitHub/GEM5_DRAMSim2/build/ARM/python/m5/internal/param_NetworkLink.py",
    "m5.internal.param_NetworkLink",
    data_m5_internal_param_NetworkLink,
    2174,
    6757);

} // anonymous namespace
