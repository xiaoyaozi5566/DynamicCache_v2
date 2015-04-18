#!/usr/bin/python

import os
import sys

gem5home = os.getcwd()
specint_dir = "benchmarks/spec2k6bin/specint"
scriptgen_dir = gem5home + "/scriptgen"
results_dir = gem5home + "/results"
stdout_dir = gem5home + "/stdout"
stderr_dir = gem5home + "/stderr"

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
    specint_dir + "/Xalan -v " + specint_dir + "/t5.xml " + specint_dir + "/xalanc.xsl"  
]

if not os.path.exists(scriptgen_dir):
    os.makedirs(scriptgen_dir)

if not os.path.exists(results_dir):
    os.makedirs(results_dir)

if not os.path.exists(stdout_dir):
    os.makedirs(stdout_dir)

if not os.path.exists(stderr_dir):
    os.makedirs(stderr_dir)

folder = sys.argv[1]

if not os.path.exists("m5out/" + folder):
    os.makedirs("m5out/" + folder)

if not os.path.exists("results/" + folder):
    os.makedirs("results/" + folder)

if not os.path.exists("stdout/" + folder):
    os.makedirs("stdout/" + folder)

if not os.path.exists("stderr/" + folder):
    os.makedirs("stderr/" + folder)

def singleprog():
    for i in range(len(specint)):
        p0 = specint[i]
        script = open(scriptgen_dir + "/run_" + p0, "w")
        command = "#!/bin/bash\n"
        command += "build/ARM/gem5.fast \\\n"
        command += "    --remote-gdb-port=0 \\\n"
        command += "    --outdir=m5out/" + folder + " \\\n"
        command += "    --stats-file=" + p0 + "_stats.txt \\\n"
        command += "    configs/dramsim2/dramsim2_se.py \\\n"
        command += "    --cpu-type=detailed \\\n"
        command += "    --caches \\\n"
        command += "    --l2cache \\\n"
        command += "    --l2config=private \\\n"
        command += "    --fast-forward=1000000000 \\\n"
        command += "    --maxinsts=1000000000 \\\n"
        command += "    --maxtick=2000000000000000 \\\n"
        command += "    --numpids=1 \\\n"
        command += "    --p0='" + specintinvoke[i] + "'\\\n"
        command += "    > " + results_dir + "/" + folder + "/stdout_" + p0 + ".out"
    
        script.write("%s\n" % command)
        script.close()
        
        os.system("qsub -cwd -e stderr/" + folder + "/ -o stdout/" + folder + "/ " + scriptgen_dir + "/run_" + p0)
        
def multiprogs():
    for i in range(len(specint)):
        for j in range(len(specint)):
            p0 = specint[i]
            p1 = specint[j]
            script = open(scriptgen_dir + "/run_" + p0 + "_" + p1, "w")
            command = "#!/bin/bash\n"
            command += "build/ARM/gem5.fast \\\n"
            command += "    --remote-gdb-port=0 \\\n"
            command += "    --outdir=m5out/" + folder + " \\\n"
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
            command += "    > " + results_dir + "/" + folder + "/stdout_" + p0 + ".out"
        
            script.write("%s\n" % command)
            script.close()
        
            os.system("qsub -cwd -e stderr/" + folder + " -o stdout/" + folder + " " + scriptgen_dir + "/run_" + p0 + "_" + p1 )

l2_size = ['1', '128', '256', '384', '512', '640', '768', '896', '1024', '1152', '1280', '1408', '1536', '1664', '1792', '1920', '2048']

def miss_curve():
    for i in range(len(specint)):
        for j in range(len(l2_size)):
            p0 = specint[i]
            l2_assoc = j
            if l2_assoc == 0:
                l2_assoc = 1
            script = open(scriptgen_dir + "/run_" + p0 + "_" + l2_size[j], "w")
            command = "#!/bin/bash\n"
            command += "build/ARM/gem5.fast \\\n"
            command += "    --remote-gdb-port=0 \\\n"
            command += "    --outdir=m5out/" + folder + " \\\n"
            command += "    --stats-file=" + p0 + "_" + l2_size[j] + "_stats.txt \\\n"
            command += "    configs/dramsim2/dramsim2_se.py \\\n"
            command += "    --cpu-type=detailed \\\n"
            command += "    --caches \\\n"
            command += "    --l2cache \\\n"
            command += "    --l2config=private \\\n"
            command += "    --l2_size=" + l2_size[j] + "kB \\\n"
            command += "    --l2_assoc=" + str(l2_assoc) + " \\\n"
            command += "    --fast-forward=1000000000 \\\n"
            command += "    --maxinsts=1000000000 \\\n"
            command += "    --maxtick=2000000000000000 \\\n"
            command += "    --numpids=1 \\\n"
            command += "    --p0='" + specintinvoke[i] + "'\\\n"
            command += "    > " + results_dir + "/" + folder + "/stdout_" + p0 + "_" + l2_size[j] + ".out"

            script.write("%s\n" % command)
            script.close()
    
            os.system("qsub -cwd -e stderr/" + folder + "/ -o stdout/" + folder + "/ " + scriptgen_dir + "/run_" + p0 + "_" + l2_size[j])
# Main
#singleprog()
miss_curve()