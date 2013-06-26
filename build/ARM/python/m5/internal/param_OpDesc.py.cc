#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_OpDesc[] = {
    120,156,197,88,95,111,219,214,21,63,151,164,104,83,150,98,
    57,118,236,186,201,90,109,88,10,161,219,162,45,91,151,98,
    11,130,166,77,208,118,88,156,148,234,96,87,27,198,209,228,
    149,77,89,34,5,242,42,174,6,249,101,14,182,61,12,216,
    71,216,211,30,246,188,175,176,239,181,157,115,46,47,45,187,
    245,80,96,171,106,139,23,151,151,135,231,158,63,191,243,231,
    50,130,242,175,134,215,123,109,128,226,125,1,16,227,79,192,
    8,96,44,160,47,64,72,1,241,38,156,212,32,255,9,196,
    53,120,5,208,183,64,90,112,142,19,27,126,109,65,218,224,
    119,92,24,217,188,34,96,86,7,233,64,191,6,251,233,6,
    56,210,133,147,58,228,191,3,33,68,42,224,32,94,129,120,
    21,94,33,119,156,120,204,112,21,226,58,79,60,136,215,120,
    82,135,89,11,228,26,244,145,249,10,244,155,200,234,109,100,
    117,131,89,253,139,88,197,248,100,11,226,38,145,163,44,159,
    17,165,67,148,188,199,13,230,178,110,36,107,65,191,101,230,
    27,208,223,128,120,29,228,6,12,111,194,0,213,107,85,60,
    54,65,218,48,220,130,254,22,72,252,109,194,57,90,32,222,
    96,218,91,76,123,179,162,221,102,218,29,232,239,128,196,223,
    182,166,117,161,215,185,133,246,76,254,141,127,29,180,39,168,
    6,14,47,101,94,36,89,26,36,233,32,75,44,122,238,210,
    64,214,143,104,88,41,221,240,1,185,225,31,192,62,136,173,
    210,13,103,128,140,5,201,63,178,224,140,39,103,22,204,58,
    48,23,48,116,32,182,97,142,219,212,72,128,35,1,231,22,
    252,198,38,130,51,28,29,52,220,27,224,40,237,131,33,27,
    78,115,90,129,179,26,204,107,208,59,152,91,180,112,226,65,
    254,119,248,253,29,102,186,202,76,45,152,227,232,192,185,3,
    103,46,236,35,17,46,13,61,82,95,28,204,81,83,92,233,
    117,28,148,118,111,65,93,82,37,78,242,52,28,75,213,196,
    121,48,9,243,112,28,60,159,60,145,69,212,169,27,146,172,
    184,55,9,213,177,207,239,216,100,140,241,68,49,175,44,149,
    106,13,39,131,36,141,131,113,22,79,71,82,173,18,163,96,
    144,140,100,16,240,195,143,199,147,44,87,79,243,60,203,125,
    178,39,47,142,178,176,122,131,172,25,141,178,66,118,104,55,
    222,198,39,246,138,168,7,19,230,72,2,176,156,244,114,140,
    226,229,201,68,161,155,52,71,162,38,110,29,114,16,15,197,
    1,14,221,95,21,232,204,238,44,204,78,195,244,168,139,90,
    157,168,108,210,253,48,81,31,77,15,187,31,62,125,246,78,
    240,196,127,252,172,151,140,239,119,15,167,201,40,238,62,246,
    159,117,39,51,117,156,165,221,241,59,221,36,85,18,173,51,
    234,46,218,229,30,62,191,73,59,156,38,71,65,194,186,5,
    199,114,52,145,185,71,171,175,211,238,162,37,26,194,21,182,
    232,136,38,206,106,120,217,226,142,181,38,246,18,210,46,34,
    141,9,85,142,193,209,63,129,61,134,14,63,177,32,191,67,
    40,25,226,79,144,91,17,43,61,122,102,241,179,79,200,44,
    122,117,104,147,239,245,226,156,145,133,16,67,202,135,228,236,
    20,24,30,53,24,186,160,97,131,104,211,56,202,103,52,34,
    57,177,177,144,185,3,141,226,175,128,118,158,179,20,184,150,
    255,237,50,199,180,5,202,163,168,197,165,109,220,250,15,140,
    204,94,135,20,217,99,144,168,227,164,200,78,83,118,5,205,
    57,150,122,104,163,23,179,231,135,67,25,169,226,77,92,248,
    44,155,182,163,48,77,51,213,14,227,184,29,42,149,39,135,
    83,37,139,182,202,218,119,11,198,156,191,97,112,86,241,155,
    77,12,174,8,3,136,43,125,19,39,145,194,155,77,190,97,
    127,20,82,33,70,142,179,184,192,117,98,113,36,149,95,51,
    64,62,14,11,218,81,221,192,249,99,179,53,3,179,227,26,
    24,21,114,52,80,117,70,100,88,20,1,111,77,235,12,62,
    226,244,50,28,77,165,34,250,66,133,10,37,160,169,222,116,
    89,240,123,141,20,54,250,146,70,65,154,165,241,12,69,76,
    162,111,211,238,175,49,8,27,64,48,188,133,16,92,193,209,
    133,166,216,22,45,43,114,74,224,185,6,124,219,164,59,176,
    243,69,153,74,16,136,231,152,112,58,22,103,12,86,139,195,
    146,184,115,26,241,111,211,112,135,134,111,209,240,134,209,124,
    9,234,55,175,170,127,143,182,180,88,231,200,46,181,179,141,
    118,123,151,66,107,247,34,180,48,55,246,40,68,44,10,164,
    139,16,177,73,255,252,81,137,127,10,62,116,59,69,197,5,
    234,217,42,126,139,180,117,13,96,125,66,225,34,20,143,22,
    160,232,147,67,24,135,254,235,215,89,176,253,141,88,240,72,
    91,240,71,180,101,163,68,77,147,209,82,23,17,185,220,90,
    76,83,79,112,50,219,33,91,46,90,113,7,11,221,126,218,
    228,138,197,85,143,235,186,78,31,218,184,122,226,16,190,6,
    54,108,151,149,168,160,132,57,201,179,207,103,237,108,208,86,
    96,100,120,120,183,184,119,183,248,57,230,131,246,35,206,48,
    58,35,232,152,207,229,36,199,216,246,248,70,199,104,192,241,
    26,148,229,4,173,77,85,157,157,196,54,230,208,47,48,236,
    49,43,45,203,192,245,202,192,36,239,3,218,175,206,214,181,
    97,7,175,186,96,161,130,140,51,35,183,21,252,20,175,247,
    201,206,164,170,4,106,234,252,158,22,153,181,33,189,252,206,
    37,156,124,253,186,248,223,67,230,239,153,8,115,161,66,5,
    93,54,73,75,160,255,19,112,207,37,224,143,64,8,64,71,
    151,97,194,1,73,23,57,114,147,200,127,11,156,104,190,164,
    214,89,58,220,172,50,21,97,52,22,15,152,84,151,190,95,
    192,159,23,178,212,185,13,130,202,146,93,118,85,139,101,201,
    169,2,148,161,243,149,74,143,115,41,146,253,221,42,88,237,
    42,88,47,50,93,213,10,97,6,90,2,156,86,245,78,1,
    9,253,244,2,76,148,224,111,139,77,107,1,34,223,167,225,
    7,21,58,132,89,251,122,229,123,19,174,47,72,129,206,130,
    148,58,10,135,197,94,119,185,102,234,215,43,240,215,12,248,
    239,87,224,151,156,148,95,113,139,77,163,69,174,62,183,4,
    158,93,176,21,161,99,131,3,178,6,125,151,194,132,187,72,
    81,70,145,48,25,139,50,221,165,140,207,38,217,211,198,170,
    188,173,253,73,195,231,203,202,16,228,210,135,163,112,124,24,
    135,143,62,161,221,104,203,200,196,149,101,228,111,45,202,79,
    49,33,174,83,129,111,127,104,244,120,185,172,236,64,149,163,
    146,159,67,34,206,34,78,9,159,30,203,246,88,142,15,113,
    223,227,100,210,30,140,194,35,246,143,93,234,247,220,232,167,
    216,193,87,235,43,183,37,123,89,59,202,82,76,222,211,72,
    101,121,59,150,120,210,144,177,134,245,229,224,228,38,45,204,
    143,10,198,214,201,41,77,151,233,203,0,15,140,9,118,163,
    190,177,133,62,204,84,41,155,155,78,29,35,88,242,240,180,
    160,102,58,65,253,148,134,183,105,120,11,150,156,217,187,200,
    252,5,237,66,38,115,49,149,120,130,219,118,77,241,130,168,
    139,47,198,231,95,190,74,124,234,175,10,101,148,186,68,41,
    87,232,176,74,163,71,153,189,95,55,139,107,60,54,120,177,
    105,22,111,240,184,206,139,45,243,53,99,131,23,111,2,30,
    254,241,244,78,43,91,20,249,43,255,107,228,115,216,44,51,
    96,14,254,175,1,239,223,255,166,196,247,127,12,101,253,191,
    46,216,197,162,110,77,29,236,67,97,58,235,69,197,248,32,
    191,121,5,125,65,148,203,80,73,237,165,219,203,83,147,147,
    136,222,187,95,249,202,232,82,29,45,30,84,250,156,115,215,
    51,219,90,232,121,217,117,98,31,91,20,236,139,231,172,114,
    96,233,214,248,2,140,78,165,57,249,61,149,167,193,162,246,
    186,239,37,81,194,201,68,166,241,69,79,203,79,150,229,114,
    202,80,212,180,153,174,3,27,216,45,188,190,24,114,164,205,
    130,114,236,180,90,21,100,75,116,31,163,52,50,142,227,175,
    124,23,153,216,39,183,233,220,91,165,93,255,103,149,35,118,
    175,66,48,41,138,169,252,101,168,232,172,244,95,158,98,231,
    195,133,192,44,168,237,171,164,217,196,112,185,230,17,177,32,
    123,241,29,159,242,175,16,125,192,231,29,226,112,237,67,226,
    193,31,237,244,61,59,143,195,42,150,35,169,228,37,124,49,
    232,202,227,106,44,177,202,102,51,60,76,241,201,4,239,71,
    65,176,212,106,244,46,50,223,167,93,232,235,26,85,35,23,
    235,209,45,254,247,28,79,112,169,191,242,65,86,139,70,182,
    208,205,248,172,240,57,45,173,87,222,228,111,135,166,222,114,
    188,210,201,113,47,28,235,239,62,252,65,195,255,14,13,223,
    53,128,224,128,211,39,51,62,251,232,179,38,198,38,159,54,
    185,237,240,233,139,3,151,74,153,78,73,7,182,181,162,109,
    181,86,168,189,254,234,197,47,87,119,92,113,23,146,28,155,
    62,151,71,73,129,54,225,215,43,210,50,3,188,251,165,144,
    92,124,109,153,62,210,93,171,62,103,63,226,99,53,197,13,
    125,101,242,214,61,225,90,244,153,211,22,117,209,20,142,104,
    52,61,219,115,189,154,141,126,164,149,77,81,183,189,122,3,
    105,119,209,155,117,107,183,233,137,255,0,144,17,111,188,
};

EmbeddedPython embedded_m5_internal_param_OpDesc(
    "m5/internal/param_OpDesc.py",
    "/Users/yaowang/Desktop/GitHub/GEM5_DRAMSim2/build/ARM/python/m5/internal/param_OpDesc.py",
    "m5.internal.param_OpDesc",
    data_m5_internal_param_OpDesc,
    2111,
    6360);

} // anonymous namespace
