#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Process[] = {
    120,156,181,85,91,143,27,53,20,246,228,178,155,77,246,26,
    46,2,4,146,41,60,204,22,216,160,170,237,11,168,162,165,
    168,32,177,5,77,182,72,44,66,163,201,216,73,188,59,30,
    143,108,207,110,130,120,91,222,249,109,252,34,56,231,204,76,
    146,66,121,64,90,114,113,206,249,236,177,207,57,254,206,151,
    148,213,175,54,124,191,224,140,185,51,48,4,124,2,150,49,
    166,3,118,30,176,0,253,22,203,90,236,172,182,218,96,181,
    153,12,216,52,96,162,195,126,99,236,134,177,31,207,59,76,
    116,153,236,16,186,181,66,187,76,108,179,113,216,131,141,213,
    159,240,10,3,176,252,14,12,99,165,191,155,92,200,212,87,
    16,14,119,253,54,140,223,91,147,74,231,210,205,232,158,96,
    116,191,131,33,25,6,5,145,156,183,152,108,51,56,85,118,
    217,197,22,134,12,177,221,180,216,249,118,131,180,49,58,68,
    122,13,210,197,200,16,217,33,164,207,228,128,93,236,98,132,
    8,238,17,184,207,68,143,137,29,66,14,152,60,100,162,79,
    201,64,49,142,200,29,52,238,144,69,227,112,23,98,138,90,
    152,0,134,153,170,220,13,225,119,170,50,153,39,90,242,169,
    177,220,121,161,114,223,193,105,83,122,247,218,43,230,1,175,
    22,72,107,95,185,0,241,119,0,119,75,231,165,230,69,85,
    34,126,173,178,140,219,50,231,166,58,224,225,253,211,39,238,
    109,48,116,178,80,186,212,220,169,95,36,55,83,238,231,18,
    182,73,210,203,20,99,109,190,95,98,85,247,193,248,53,192,
    2,222,84,183,61,14,113,238,57,237,243,129,202,211,172,20,
    146,223,113,74,143,234,99,79,230,243,59,33,222,76,184,78,
    60,115,117,134,66,86,83,56,184,71,48,140,94,56,105,221,
    104,153,152,235,36,159,141,158,74,119,233,77,49,122,166,252,
    215,229,100,244,236,171,211,7,241,211,232,241,41,208,225,222,
    200,217,116,132,7,213,20,56,41,150,30,179,150,139,194,88,
    31,107,233,231,70,196,233,98,17,23,86,10,9,135,222,197,
    83,48,10,214,250,15,153,125,4,227,196,152,140,235,164,8,
    31,11,97,249,85,2,227,199,156,236,162,178,225,206,168,124,
    199,159,173,115,141,144,159,81,175,201,239,214,146,220,255,123,
    146,238,100,157,88,136,132,240,120,104,28,35,39,226,216,247,
    201,209,70,148,25,186,88,121,191,44,36,25,103,182,148,180,
    58,153,56,111,147,212,251,46,54,85,98,19,237,183,176,239,
    188,85,249,140,64,149,23,64,60,4,129,128,141,9,84,51,
    181,57,38,182,145,9,207,203,220,211,93,39,249,146,160,138,
    139,20,203,169,212,198,46,199,80,45,74,5,216,23,19,219,
    98,44,160,31,16,65,18,231,170,220,34,236,254,168,255,82,
    17,111,171,146,212,138,239,227,94,216,134,91,1,190,135,244,
    126,35,24,182,14,58,20,203,183,234,74,254,171,200,252,241,
    79,145,185,232,108,200,11,104,220,22,33,109,18,129,237,218,
    157,177,13,181,89,61,210,109,212,166,141,106,3,226,83,75,
    205,96,3,233,17,178,187,129,236,52,114,180,66,250,132,236,
    111,32,131,70,160,42,4,68,108,143,144,67,66,142,152,0,
    29,59,32,132,100,234,16,75,254,46,210,132,10,253,33,241,
    77,166,165,79,38,153,228,161,185,130,91,87,66,58,158,106,
    241,211,167,63,115,53,229,78,250,99,23,82,79,107,157,228,
    130,103,42,135,165,27,143,21,89,233,120,98,103,165,6,106,
    184,99,247,58,238,154,95,41,107,114,68,112,7,15,84,115,
    164,36,105,105,145,65,252,218,216,75,0,185,80,22,180,31,
    88,163,4,70,132,141,85,194,205,115,37,220,17,238,51,157,
    194,52,92,20,111,80,164,244,12,168,89,160,51,124,105,201,
    10,70,82,53,218,168,132,194,219,165,221,10,98,47,223,152,
    162,50,124,130,3,232,100,150,120,101,114,94,24,236,249,4,
    98,156,171,116,206,189,65,201,180,168,2,205,18,106,197,8,
    57,20,145,240,239,225,64,181,197,83,168,21,214,245,33,174,
    253,64,73,86,221,71,66,169,5,253,66,157,42,255,186,242,
    191,169,155,171,84,130,186,88,162,129,192,172,1,102,53,80,
    212,64,129,6,246,225,11,120,246,225,125,106,121,136,148,146,
    248,31,26,11,201,115,15,247,122,171,110,172,97,112,80,183,
    214,250,253,60,196,128,60,214,70,63,56,89,253,195,71,24,
    4,253,233,3,90,96,45,28,133,139,158,53,139,170,107,233,
    132,219,15,156,14,250,188,146,202,71,239,225,158,8,28,6,
    253,160,223,122,243,232,47,220,23,18,57,
};

EmbeddedPython embedded_m5_objects_Process(
    "m5/objects/Process.py",
    "/Users/yaowang/Desktop/GitHub/GEM5_DRAMSim2/src/sim/Process.py",
    "m5.objects.Process",
    data_m5_objects_Process,
    1035,
    2307);

} // anonymous namespace
