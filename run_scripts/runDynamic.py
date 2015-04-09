#!/usr/bin/python

import os

gem5home = os.getcwd()
specint_dir = "benchmarks/spec2k6bin/specint"
scriptgen_dir = gem5home + "/scriptgen"
results_dir = gem5home + "/results"

specint = ['bzip2', 'gcc', 'mcf', 'gobmk', 'hmmer', 'sjeng', 'libquantum', 'h264ref', 'astar', 'xalan']

specintinvoke = [
    specint_dir + "/bzip2 " + specint_dir + "/input.source 280",
    specint_dir + "/gcc " + specint_dir + "/200.in -o results/200.s",
    specint_dir + "/mcf " + specint_dir + "/inp.in",
    specint_dir + "/gobmk --quiet --mode gtp --gtp-input " + specint_dir + "/13x13.tst",
    specint_dir + "/hmmer " + specint_dir + "/nph3.hmm " + specint_dir + "/swiss41",
    specint_dir + "/sjeng " + specint_dir + "/ref.txt",
    specint_dir + "/libquantum 1397 8",
    specint_dir + "/h264ref -d " + specint_dir + "/foreman_ref_encoder_baseline.cfg",
    specint_dir + "/astar " + specint_dir + "/BigLakes2048.cfg",
    specint_dir + "/Xalan -v " + specint_dir + "t5.xml " + specint_dir + "/xalanc.xsl"  
]

if not os.path.exists(scriptgen_dir):
    os.makedirs(scriptgen_dir)

if not os.path.exists(results_dir):
    os.makedirs(results_dir)

for i in range(len(specint)):
    for j in range(len(specint)):
        p0 = specint[i]
        p1 = specint[j]
        script = open(scriptgen_dir + "/" + p0 + "_" + p1, "w")
        command = "#!/bin/bash\n"
        command += "build/ARM/gem5.fast \\\n"
        command += "    --remote-gdb-port=0 \\\n"
        command += "    --outdir=m5out \\\n"
        command += "    --stats-file=" + p0 + "_" + p1 + "_stats.txt \\\n"
        command += "    configs/dramsim2/dramsim2_se.py \\\n"
        command += "    --cpu-type=detailed \\\n"
        command += "    --caches \\\n"
        command += "    --l2cache \\\n"
        command += "    --l2config=shared \\\n"
        command += "    --fast-forward=1000000000 \\\n"
        command += "    --maxinsts=1000000000 \\\n"
        command += "    --maxtick=2000000000000000 \\\n"
        command += "    --numpids=2 \\\n"
        command += "    --p0='" + specintinvoke[i] + "'\\\n"
        command += "    --p1='" + specintinvoke[j] + "'\\\n"
        command += "    > " + results_dir + "/stdout_" + p0 + "_" + p1 + ".out"
        
        script.write("%s " % command)
        script.close()
