#include "sim/init.hh"

namespace {

const uint8_t data_m5_config[] = {
    120,156,173,144,75,107,27,49,20,133,175,52,15,219,193,180,
    16,232,170,45,100,57,41,212,130,130,119,165,180,56,169,211,
    133,29,24,211,205,108,130,235,81,236,113,45,201,25,41,45,
    1,119,147,100,159,159,220,222,163,36,36,63,160,66,143,171,
    115,165,163,239,106,65,15,45,227,241,249,128,200,223,113,80,
    115,23,180,33,170,238,99,73,27,65,70,82,37,201,36,84,
    37,100,82,170,50,18,154,104,157,211,186,67,117,66,55,130,
    170,46,233,46,249,107,122,210,211,168,247,72,247,168,101,93,
    146,206,16,215,25,221,72,164,32,62,83,216,225,226,154,44,
    63,153,211,45,63,223,1,199,172,232,48,83,243,151,219,180,
    72,56,12,128,109,124,221,180,33,143,209,121,179,209,33,229,
    112,237,26,27,122,28,76,134,103,163,211,233,215,111,227,40,
    159,156,78,142,61,110,14,204,112,33,120,149,60,176,31,161,
    226,247,176,228,117,15,181,206,130,196,102,71,192,249,35,40,
    36,180,19,32,245,135,49,189,3,15,44,166,5,156,3,208,
    22,206,158,3,6,194,212,89,29,186,15,40,219,121,88,149,
    56,92,224,193,152,183,115,115,159,199,37,112,23,248,253,56,
    249,17,79,234,187,215,173,87,87,115,247,123,110,151,234,72,
    251,159,193,109,213,184,9,39,151,63,212,248,152,11,59,42,
    191,76,102,141,249,160,124,187,80,219,171,176,114,86,153,161,
    130,97,179,28,176,128,202,150,58,188,131,103,31,206,34,23,
    169,120,41,250,34,149,197,30,72,128,227,124,132,119,126,16,
    49,113,46,178,150,72,150,157,199,226,180,253,213,180,206,150,
    184,87,102,143,234,202,25,205,37,63,193,255,223,10,240,65,
    31,141,171,47,55,250,211,91,24,191,224,169,47,222,36,251,
    50,79,246,197,107,241,74,254,3,131,164,138,222,
};

EmbeddedPython embedded_m5_config(
    "m5/config.py",
    "/Users/yaowang/Desktop/GitHub/GEM5_DRAMSim2/src/python/m5/config.py",
    "m5.config",
    data_m5_config,
    413,
    698);

} // anonymous namespace
