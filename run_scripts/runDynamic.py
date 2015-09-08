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

specintinvoke = {
    'bzip2'     : specint_dir + "/bzip2 " + specint_dir + "/input.source 280",
    'gcc'       : specint_dir + "/gcc " + specint_dir + "/200.in -o results/200.s",
    'mcf'       : specint_dir + "/mcf " + specint_dir + "/inp.in",
    'gobmk'     : specint_dir + "/gobmk --quiet --mode gtp --gtp-input " + specint_dir + "/13x13.tst",
    'hmmer'     : specint_dir + "/hmmer " + specint_dir + "/nph3.hmm " + specint_dir + "/swiss41",
    'sjeng'     : specint_dir + "/sjeng " + specint_dir + "/ref.txt",
    'libquantum': specint_dir + "/libquantum 1397 8",
    'h264ref'   : specint_dir + "/h264ref -d " + specint_dir + "/foreman_ref_encoder_baseline.cfg",
    'astar'     : specint_dir + "/astar " + specint_dir + "/BigLakes2048.cfg",
    'xalan'     : specint_dir + "/Xalan -v " + specint_dir + "/t5.xml " + specint_dir + "/xalanc.xsl",
    'soplex'    : specint_dir + "/soplex -sl -e -m45000 " + specint_dir + "/pds-50.mps"
}

cpus = ["detailed"]

# Workload Characterization
# Cache insensitive: astar, libquantum
# Large gain beyond half cache: bzip2 mcf xalan soplex
# Small gain beyond half cache: gcc h264ref gobmk hmmer sjeng

multiprog = [['astar', 'bzip2'],
             ['bzip2', 'astar'],
             ['astar', 'mcf'],
             ['mcf', 'astar'],
             ['libquantum', 'h264ref'],
             ['h264ref', 'libquantum'],
             ['libquantum', 'xalan'],
             ['xalan', 'libquantum'],
             ['astar', 'gobmk'],
             ['gobmk', 'astar'],
             ['libquantum', 'hmmer'],
             ['hmmer', 'libquantum'],
             ['bzip2', 'gcc'],
             ['gcc', 'bzip2'],
             ['h264ref', 'gobmk'],
             ['gobmk', 'h264ref'],
             ['mcf', 'hmmer'],
             ['hmmer', 'mcf'],
             ['xalan', 'sjeng'],
             ['sjeng', 'xalan'],
            ]

multiprog = [['mcf', 'bzip2'],
             ['xalan', 'soplex'],
             ['bzip2', 'xalan'],
             ['soplex', 'mcf'],
             ['bzip2', 'mcf'],
             ['soplex', 'xalan'],
             ['xalan', 'bzip2'],
             ['mcf', 'soplex'],
             ['bzip2', 'soplex'],
             ['soplex', 'bzip2'],
             ['xalan', 'mcf'],
             ['mcf', 'xalan'],

             ['mcf', 'astar'],
             ['xalan', 'astar'],
             ['soplex', 'libquantum'],
             ['bzip2', 'libquantum'],
             ['astar', 'mcf'],
             ['astar', 'xalan'],
             ['libquantum', 'soplex'],
             ['libquantum', 'bzip2'],
             ['mcf', 'libquantum'],
             ['xalan', 'libquantum'],
             ['soplex', 'astar'],
             ['bzip2', 'astar'],
             ['libquantum', 'mcf'],
             ['libquantum', 'xalan'],
             ['astar', 'soplex'],
             ['astar', 'bzip2'],

             ['bzip2', 'h264ref'],
             ['h264ref', 'bzip2'],
             ['mcf', 'gobmk'],
             ['hmmer', 'mcf'],
             ['xalan', 'sjeng'],
             ['hmmer', 'xalan'],
             ['soplex', 'h264ref'],
             ['gobmk', 'soplex'],

             ['astar', 'libquantum'],
             ['sjeng', 'gobmk'],
             ['hmmer', 'sjeng'],
             ['astar', 'h264ref'],
             
             ['libquantum', 'astar'],
             ['sjeng', 'hmmer'],
             ['sjeng', 'h264ref'],
             ['hmmer', 'gobmk'],
             ['hmmer', 'h264ref'],
             ['h264ref', 'hmmer'],
             ['h264ref', 'sjeng'],
             ['h264ref', 'gobmk'],
             ['gobmk', 'hmmer'],
             ['gobmk', 'sjeng'],
             ['gobmk', 'h264ref'],
             
             ['gobmk', 'astar'],
             ['hmmer', 'astar'],
             ['sjeng', 'libquantum'],
             ['h264ref', 'libquantum'],
             ['astar', 'gobmk'],
             ['astar', 'hmmer'],
             ['libquantum', 'sjeng'],
             ['libquantum', 'h264ref'],
             ['gobmk', 'libquantum'],
             ['hmmer', 'libquantum'],
             ['sjeng', 'astar'],
             ['h264ref', 'astar'],
             ['libquantum', 'gobmk'],
             ['libquantum', 'hmmer'],
             ['astar', 'sjeng'],
             
            ]

multiprog4 = [['mcf', 'bzip2', 'xalan', 'soplex'],
              ['bzip2', 'xalan', 'soplex', 'mcf'],
              ['xalan', 'soplex', 'mcf', 'bzip2'],
              ['soplex', 'mcf', 'bzip2', 'xalan'],
              ['mcf', 'xalan', 'bzip2', 'soplex'],
              ['xalan', 'bzip2', 'soplex', 'mcf'],
              ['bzip2', 'soplex', 'mcf', 'xalan'],
              ['soplex', 'mcf', 'xalan', 'bzip2'],
              
              ['mcf', 'xalan', 'astar', 'astar'],
              ['astar', 'astar', 'mcf', 'xalan'],
              ['libquantum', 'libquantum', 'soplex', 'bzip2'],
              ['soplex', 'bzip2', 'libquantum', 'libquantum'],
              ['mcf', 'astar', 'soplex', 'libquantum'],
              ['astar', 'mcf', 'libquantum', 'soplex'],
              ['astar', 'xalan', 'bzip2', 'libquantum'],
              ['xalan', 'libquantum', 'astar', 'bzip2'],
              
              ['mcf', 'xalan', 'h264ref', 'gobmk'],
              ['h264ref', 'gobmk', 'mcf', 'xalan'],
              ['hmmer', 'sjeng', 'soplex', 'bzip2'],
              ['soplex', 'bzip2', 'hmmer', 'sjeng'],
              ['mcf', 'h264ref', 'soplex', 'hmmer'],
              ['h264ref', 'mcf', 'hmmer', 'soplex'],
              ['sjeng', 'xalan', 'bzip2', 'gobmk'],
              ['xalan', 'gobmk', 'sjeng', 'bzip2'],
              
              ['astar', 'astar', 'h264ref', 'gobmk'],
              ['h264ref', 'gobmk', 'astar', 'astar'],
              ['hmmer', 'sjeng', 'libquantum', 'libquantum'],
              ['libquantum', 'libquantum', 'hmmer', 'sjeng'],
              ['astar', 'h264ref', 'libquantum', 'hmmer'],
              ['h264ref', 'libquantum', 'hmmer', 'astar'],
              ['sjeng', 'astar', 'libquantum', 'gobmk'],
              ['libquantum', 'gobmk', 'sjeng', 'astar'],
             ]
              
H_mins = [1, 2, 4]
H_mins = [1]
thresholds = [0.02, 0.05, 0.1, 0.2]
thresholds = [0.02, 0.05, 0.1, 0.15, 0.2, 0.25]

schemes = ['static', 'dynamic']

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
        command += "    --fixaddr \\\n"
        command += "    --cpu-type=detailed \\\n"
        command += "    --caches \\\n"
        command += "    --l2cache \\\n"
        command += "    --l2config=private \\\n"
        command += "    --fast-forward=1000000000 \\\n"
        command += "    --maxinsts=250000000 \\\n"
        command += "    --maxtick=2000000000000000 \\\n"
        command += "    --numpids=1 \\\n"
        command += "    --p0='" + specintinvoke[p0] + "'\\\n"
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
            command += "    --fixaddr \\\n"
            command += "    --cpu-type=detailed \\\n"
            command += "    --caches \\\n"
            command += "    --l2cache \\\n"
            command += "    --l2config=shared \\\n"
            command += "    --fast-forward=1000000000 \\\n"
            command += "    --maxinsts=250000000 \\\n"
            command += "    --maxtick=2000000000000000 \\\n"
            command += "    --numpids=2 \\\n"
            command += "    --p0='" + specintinvoke[p0] + "'\\\n"
            command += "    --p1='" + specintinvoke[p1] + "'\\\n"
            command += "    > " + results_dir + "/" + folder + "/stdout_" + p0 + ".out"
        
            script.write("%s\n" % command)
            script.close()
        
            os.system("qsub -cwd -e stderr/" + folder + " -o stdout/" + folder + " " + scriptgen_dir + "/run_" + p0 + "_" + p1 )

l2_size = ['1', '128', '256', '384', '512', '640', '768', '896', '1024', '1152', '1280', '1408', '1536', '1664', '1792', '1920', '2048']

def miss_curve():
    for k in range(len(cpus)):
        for i in range(len(specint)):
            for j in range(len(l2_size)):
                p0 = specint[i]
                l2_assoc = j
                if l2_assoc == 0:
                    l2_assoc = 1
                filename = cpus[k] + "_" + p0 + "_" + l2_size[j]
                script = open(scriptgen_dir + "/run_" + filename, "w")
                command = "#!/bin/bash\n"
                command += "build/ARM/gem5.fast \\\n"
                command += "    --remote-gdb-port=0 \\\n"
                command += "    --outdir=m5out/" + folder + " \\\n"
                command += "    --stats-file=" + filename + "_stats.txt \\\n"
                command += "    configs/dramsim2/dramsim2_se.py \\\n"
                command += "    --fixaddr \\\n"
                command += "    --cpu-type=" + cpus[k] + " \\\n"
                command += "    --caches \\\n"
                command += "    --l2cache \\\n"
                command += "    --l2config=private \\\n"
                command += "    --l2_size=" + l2_size[j] + "kB \\\n"
                command += "    --l2_assoc=" + str(l2_assoc) + " \\\n"
                command += "    --fast-forward=1000000000 \\\n"
                command += "    --maxinsts=250000000 \\\n"
                command += "    --maxtick=2000000000000000 \\\n"
                command += "    --numpids=1 \\\n"
                command += "    --p0='" + specintinvoke[p0] + "'\\\n"
                command += "    > " + results_dir + "/" + folder + "/stdout_" + filename + ".out"

                script.write("%s\n" % command)
                script.close()
    
                os.system("qsub -cwd -e stderr/" + folder + "/ -o stdout/" + folder + "/ " + scriptgen_dir + "/run_" + filename)

def nopar_cache():
    for cpu in cpus:
        for workload in multiprog:
            p0 = workload[0]
            p1 = workload[1]
            filename = cpu + "_" + "nopar" + "_" + p0 + "_" + p1
            script = open(scriptgen_dir + "/run_" + filename, "w")
            command = "#!/bin/bash\n"
            command += "build/ARM/gem5.fast \\\n"
            command += "    --remote-gdb-port=0 \\\n"
            command += "    --outdir=m5out/" + folder + " \\\n"
            command += "    --stats-file=" + filename + "_stats.txt \\\n"
            command += "    configs/dramsim2/dramsim2_se.py \\\n"
            command += "    --fixaddr \\\n"
            command += "    --cpu-type=" + cpu + " \\\n"
            command += "    --caches \\\n"
            command += "    --l2cache \\\n"
            command += "    --l2config=shared \\\n"
            command += "    --l2_size=1024kB \\\n"
            command += "    --l2_assoc=8 \\\n"
            command += "    --fast-forward=1000000000 \\\n"
            command += "    --maxinsts=250000000 \\\n"
            command += "    --maxtick=2000000000000000 \\\n"
            command += "    --numpids=2 \\\n"
            command += "    --p0='" + specintinvoke[p0] + "'\\\n"
            command += "    --p1='" + specintinvoke[p1] + "'\\\n"
            command += "    > " + results_dir + "/" + folder + "/stdout_" + filename + ".out"

            script.write("%s\n" % command)
            script.close()
            
            os.system("qsub -cwd -e stderr/" + folder + "/ -o stdout/" + folder + "/ " + 
            scriptgen_dir + "/run_" + filename)
            
def dynamic_cache():
    for cpu in cpus:
        for workload in multiprog:
            for H_min in H_mins:
                for threshold in thresholds:
                    p0 = workload[0]
                    p1 = workload[1]
                    filename = cpu + "_" + "dynamic" + "_" + p0 + "_" + p1 + "_" + str(H_min) + "_" + str(int(threshold*100))
                    script = open(scriptgen_dir + "/run_" + filename, "w")
                    command = "#!/bin/bash\n"
                    command += "build/ARM/gem5.fast \\\n"
                    command += "    --remote-gdb-port=0 \\\n"
                    command += "    --outdir=m5out/" + folder + " \\\n"
                    command += "    --stats-file=" + filename + "_stats.txt \\\n"
                    command += "    configs/dramsim2/dramsim2_se.py \\\n"
                    command += "    --fixaddr \\\n"
                    command += "    --cpu-type=" + cpu + " \\\n"
                    command += "    --caches \\\n"
                    command += "    --l2cache \\\n"
                    command += "    --l2config=shared \\\n"
                    command += "    --l2_size=1024kB \\\n"
                    command += "    --l2_assoc=8 \\\n"
                    command += "    --partition_cache \\\n"
                    command += "    --dynamic_cache \\\n"
                    command += "    --fast-forward=1000000000 \\\n"
                    command += "    --maxinsts=250000000 \\\n"
                    command += "    --maxtick=2000000000000000 \\\n"
                    command += "    --numpids=2 \\\n"
                    command += "    --H_min=" + str(H_min) + " \\\n"
                    command += "    --th_inc=" + str(threshold) + " \\\n"
                    command += "    --th_dec=" + str(threshold) + " \\\n"
                    command += "    --p0='" + specintinvoke[p0] + "'\\\n"
                    command += "    --p1='" + specintinvoke[p1] + "'\\\n"
                    command += "    > " + results_dir + "/" + folder + "/stdout_" + filename + ".out"

                    script.write("%s\n" % command)
                    script.close()
                    
                    os.system("qsub -cwd -e stderr/" + folder + "/ -o stdout/" + folder + "/ " + 
                    scriptgen_dir + "/run_" + filename)

def static_cache():
    for cpu in cpus:
        for workload in multiprog:
            p0 = workload[0]
            p1 = workload[1]
            filename = cpu + "_" + "static" + "_" + p0 + "_" + p1
            script = open(scriptgen_dir + "/run_" + filename, "w")
            command = "#!/bin/bash\n"
            command += "build/ARM/gem5.fast \\\n"
            command += "    --remote-gdb-port=0 \\\n"
            command += "    --outdir=m5out/" + folder + " \\\n"
            command += "    --stats-file=" + filename + "_stats.txt \\\n"
            command += "    configs/dramsim2/dramsim2_se.py \\\n"
            command += "    --fixaddr \\\n"
            command += "    --cpu-type=" + cpu + " \\\n"
            command += "    --caches \\\n"
            command += "    --l2cache \\\n"
            command += "    --l2config=shared \\\n"
            command += "    --l2_size=1024kB \\\n"
            command += "    --l2_assoc=8 \\\n"
            command += "    --partition_cache \\\n"
            command += "    --fast-forward=1000000000 \\\n"
            command += "    --maxinsts=250000000 \\\n"
            command += "    --maxtick=2000000000000000 \\\n"
            command += "    --numpids=2 \\\n"
            command += "    --p0='" + specintinvoke[p0] + "'\\\n"
            command += "    --p1='" + specintinvoke[p1] + "'\\\n"
            command += "    > " + results_dir + "/" + folder + "/stdout_" + filename + ".out"

            script.write("%s\n" % command)
            script.close()
            
            os.system("qsub -cwd -e stderr/" + folder + "/ -o stdout/" + folder + "/ " +
            scriptgen_dir + "/run_" + filename)                 

def utility_cache():
    for cpu in cpus:
        for workload in multiprog:
            p0 = workload[0]
            p1 = workload[1]
            filename = cpu + "_" + "utility" + "_" + p0 + "_" + p1
            script = open(scriptgen_dir + "/run_" + filename, "w")
            command = "#!/bin/bash\n"
            command += "build/ARM/gem5.fast \\\n"
            command += "    --remote-gdb-port=0 \\\n"
            command += "    --outdir=m5out/" + folder + " \\\n"
            command += "    --stats-file=" + filename + "_stats.txt \\\n"
            command += "    configs/dramsim2/dramsim2_se.py \\\n"
            command += "    --fixaddr \\\n"
            command += "    --cpu-type=" + cpu + " \\\n"
            command += "    --caches \\\n"
            command += "    --l2cache \\\n"
            command += "    --l2config=shared \\\n"
            command += "    --l2_size=1024kB \\\n"
            command += "    --l2_assoc=8 \\\n"
            command += "    --util_cache \\\n"
            command += "    --fast-forward=1000000000 \\\n"
            command += "    --maxinsts=250000000 \\\n"
            command += "    --maxtick=2000000000000000 \\\n"
            command += "    --numpids=2 \\\n"
            command += "    --p0='" + specintinvoke[p0] + "'\\\n"
            command += "    --p1='" + specintinvoke[p1] + "'\\\n"
            command += "    > " + results_dir + "/" + folder + "/stdout_" + filename + ".out"

            script.write("%s\n" % command)
            script.close()
            
            os.system("qsub -cwd -e stderr/" + folder + "/ -o stdout/" + folder + "/ " + 
            scriptgen_dir + "/run_" + filename)

def nopar_cache4():
    for cpu in cpus:
        for workload in multiprog4:
            p0 = workload[0]
            p1 = workload[1]
            p2 = workload[2]
            p3 = workload[3]
            filename = cpu + "_" + "nopar" + "_" + p0 + "_" + p1 + "_" + p2 + "_" + p3
            script = open(scriptgen_dir + "/run_" + filename, "w")
            command = "#!/bin/bash\n"
            command += "build/ARM/gem5.fast \\\n"
            command += "    --remote-gdb-port=0 \\\n"
            command += "    --outdir=m5out/" + folder + " \\\n"
            command += "    --stats-file=" + filename + "_stats.txt \\\n"
            command += "    configs/dramsim2/dramsim2_se.py \\\n"
            command += "    --fixaddr \\\n"
            command += "    --cpu-type=" + cpu + " \\\n"
            command += "    --caches \\\n"
            command += "    --l2cache \\\n"
            command += "    --l2config=shared \\\n"
            command += "    --l2_size=2048kB \\\n"
            command += "    --l2_assoc=16 \\\n"
            command += "    --fast-forward=1000000000 \\\n"
            command += "    --maxinsts=250000000 \\\n"
            command += "    --maxtick=2000000000000000 \\\n"
            command += "    --numpids=4 \\\n"
            command += "    --p0='" + specintinvoke[p0] + "'\\\n"
            command += "    --p1='" + specintinvoke[p1] + "'\\\n"
            command += "    --p2='" + specintinvoke[p2] + "'\\\n"
            command += "    --p3='" + specintinvoke[p3] + "'\\\n"
            command += "    > " + results_dir + "/" + folder + "/stdout_" + filename + ".out"

            script.write("%s\n" % command)
            script.close()
            
            os.system("qsub -cwd -e stderr/" + folder + "/ -o stdout/" + folder + "/ " + 
            scriptgen_dir + "/run_" + filename)
            
def dynamic_cache4():
    for cpu in cpus:
        for workload in multiprog4:
            for H_min in H_mins:
                for threshold in thresholds:
                    p0 = workload[0]
                    p1 = workload[1]
                    p2 = workload[2]
                    p3 = workload[3]
                    filename = cpu + "_" + "dynamic" + "_" + p0 + "_" + p1 + "_" + p2 + "_" + p3 + "_" + str(H_min) + "_" + str(int(threshold*100))
                    script = open(scriptgen_dir + "/run_" + filename, "w")
                    command = "#!/bin/bash\n"
                    command += "build/ARM/gem5.fast \\\n"
                    command += "    --remote-gdb-port=0 \\\n"
                    command += "    --outdir=m5out/" + folder + " \\\n"
                    command += "    --stats-file=" + filename + "_stats.txt \\\n"
                    command += "    configs/dramsim2/dramsim2_se.py \\\n"
                    command += "    --fixaddr \\\n"
                    command += "    --cpu-type=" + cpu + " \\\n"
                    command += "    --caches \\\n"
                    command += "    --l2cache \\\n"
                    command += "    --l2config=shared \\\n"
                    command += "    --l2_size=2048kB \\\n"
                    command += "    --l2_assoc=16 \\\n"
                    command += "    --lattice_cache \\\n"
                    command += "    --dynamic_cache \\\n"
                    command += "    --fast-forward=1000000000 \\\n"
                    command += "    --maxinsts=250000000 \\\n"
                    command += "    --maxtick=2000000000000000 \\\n"
                    command += "    --numpids=4 \\\n"
                    command += "    --th_inc=" + str(threshold) + " \\\n"
                    command += "    --th_dec=" + str(threshold) + " \\\n"
                    command += "    --p0='" + specintinvoke[p0] + "'\\\n"
                    command += "    --p1='" + specintinvoke[p1] + "'\\\n"
                    command += "    --p2='" + specintinvoke[p2] + "'\\\n"
                    command += "    --p3='" + specintinvoke[p3] + "'\\\n"
                    command += "    > " + results_dir + "/" + folder + "/stdout_" + filename + ".out"

                    script.write("%s\n" % command)
                    script.close()
                    
                    os.system("qsub -cwd -e stderr/" + folder + "/ -o stdout/" + folder + "/ " +
                    scriptgen_dir + "/run_" + filename)

def static_cache4():
    for cpu in cpus:
        for workload in multiprog4:
            p0 = workload[0]
            p1 = workload[1]
            p2 = workload[2]
            p3 = workload[3]
            filename = cpu + "_" + "static" + "_" + p0 + "_" + p1 + "_" + p2 + "_" + p3
            script = open(scriptgen_dir + "/run_" + filename, "w")
            command = "#!/bin/bash\n"
            command += "build/ARM/gem5.fast \\\n"
            command += "    --remote-gdb-port=0 \\\n"
            command += "    --outdir=m5out/" + folder + " \\\n"
            command += "    --stats-file=" + filename + "_stats.txt \\\n"
            command += "    configs/dramsim2/dramsim2_se.py \\\n"
            command += "    --fixaddr \\\n"
            command += "    --cpu-type=" + cpu + " \\\n"
            command += "    --caches \\\n"
            command += "    --l2cache \\\n"
            command += "    --l2config=shared \\\n"
            command += "    --l2_size=2048kB \\\n"
            command += "    --l2_assoc=16 \\\n"
            command += "    --lattice_cache \\\n"
            command += "    --fast-forward=1000000000 \\\n"
            command += "    --maxinsts=250000000 \\\n"
            command += "    --maxtick=2000000000000000 \\\n"
            command += "    --numpids=4 \\\n"
            command += "    --p0='" + specintinvoke[p0] + "'\\\n"
            command += "    --p1='" + specintinvoke[p1] + "'\\\n"
            command += "    --p2='" + specintinvoke[p2] + "'\\\n"
            command += "    --p3='" + specintinvoke[p3] + "'\\\n"
            command += "    > " + results_dir + "/" + folder + "/stdout_" + filename + ".out"

            script.write("%s\n" % command)
            script.close()
            
            os.system("qsub -cwd -e stderr/" + folder + "/ -o stdout/" + folder + "/ " +
            scriptgen_dir + "/run_" + filename) 

def baseline_QoS():
    for cpu in cpus:
        for workload in multiprog4:
            p0 = workload[0]
            p1 = workload[1]
            p2 = workload[2]
            p3 = workload[3]
            filename = cpu + "_" + "baselineQoS" + "_" + p0 + "_" + p1 + "_" + p2 + "_" + p3
            script = open(scriptgen_dir + "/run_" + filename, "w")
            command = "#!/bin/bash\n"
            command += "build/ARM/gem5.fast \\\n"
            command += "    --remote-gdb-port=0 \\\n"
            command += "    --outdir=m5out/" + folder + " \\\n"
            command += "    --stats-file=" + filename + "_stats.txt \\\n"
            command += "    configs/dramsim2/dramsim2_se.py \\\n"
            command += "    --fixaddr \\\n"
            command += "    --cpu-type=" + cpu + " \\\n"
            command += "    --caches \\\n"
            command += "    --l2cache \\\n"
            command += "    --l2config=shared \\\n"
            command += "    --l2_size=1024kB \\\n"
            command += "    --l2_assoc=8 \\\n"
            command += "    --lattice_cache \\\n"
            command += "    --fast-forward=1000000000 \\\n"
            command += "    --maxinsts=250000000 \\\n"
            command += "    --maxtick=2000000000000000 \\\n"
            command += "    --numpids=4 \\\n"
            command += "    --p0='" + specintinvoke[p0] + "'\\\n"
            command += "    --p1='" + specintinvoke[p1] + "'\\\n"
            command += "    --p2='" + specintinvoke[p2] + "'\\\n"
            command += "    --p3='" + specintinvoke[p3] + "'\\\n"
            command += "    > " + results_dir + "/" + folder + "/stdout_" + filename + ".out"

            script.write("%s\n" % command)
            script.close()
            
            os.system("qsub -cwd -e stderr/" + folder + "/ -o stdout/" + folder + "/ " +
            scriptgen_dir + "/run_" + filename) 
                            
def dynamic_QoS():
    for cpu in cpus:
        for workload in multiprog4:
            for H_min in H_mins:
                for threshold in thresholds:
                    p0 = workload[0]
                    p1 = workload[1]
                    p2 = workload[2]
                    p3 = workload[3]
                    filename = cpu + "_" + "dynamicQoS" + "_" + p0 + "_" + p1 + "_" + p2 + "_" + p3 + "_2_" + str(int(threshold*100))
                    script = open(scriptgen_dir + "/run_" + filename, "w")
                    command = "#!/bin/bash\n"
                    command += "build/ARM/gem5.fast \\\n"
                    command += "    --remote-gdb-port=0 \\\n"
                    command += "    --outdir=m5out/" + folder + " \\\n"
                    command += "    --stats-file=" + filename + "_stats.txt \\\n"
                    command += "    configs/dramsim2/dramsim2_se.py \\\n"
                    command += "    --fixaddr \\\n"
                    command += "    --cpu-type=" + cpu + " \\\n"
                    command += "    --caches \\\n"
                    command += "    --l2cache \\\n"
                    command += "    --l2config=shared \\\n"
                    command += "    --l2_size=2048kB \\\n"
                    command += "    --l2_assoc=16 \\\n"
                    command += "    --lattice_cache \\\n"
                    command += "    --dynamic_cache \\\n"
                    command += "    --fast-forward=1000000000 \\\n"
                    command += "    --maxinsts=250000000 \\\n"
                    command += "    --maxtick=2000000000000000 \\\n"
                    command += "    --numpids=4 \\\n"
                    command += "    --H_min=2 \\\n"
                    command += "    --th_inc=" + str(threshold) + " \\\n"
                    command += "    --th_dec=" + str(threshold) + " \\\n"
                    command += "    --p0='" + specintinvoke[p0] + "'\\\n"
                    command += "    --p1='" + specintinvoke[p1] + "'\\\n"
                    command += "    --p2='" + specintinvoke[p2] + "'\\\n"
                    command += "    --p3='" + specintinvoke[p3] + "'\\\n"
                    command += "    > " + results_dir + "/" + folder + "/stdout_" + filename + ".out"

                    script.write("%s\n" % command)
                    script.close()
                    
                    os.system("qsub -cwd -e stderr/" + folder + "/ -o stdout/" + folder + "/ " +
                    scriptgen_dir + "/run_" + filename)

def diamond_cache():
    for cpu in cpus:
        for workload in multiprog4:
            for H_min in H_mins:
                for threshold in thresholds:
                    p0 = workload[0]
                    p1 = workload[1]
                    p2 = workload[2]
                    p3 = workload[3]
                    filename = cpu + "_" + "diamond" + "_" + p0 + "_" + p1 + "_" + p2 + "_" + p3 + "_" + str(H_min) + "_" + str(int(threshold*100))
                    script = open(scriptgen_dir + "/run_" + filename, "w")
                    command = "#!/bin/bash\n"
                    command += "build/ARM/gem5.fast \\\n"
                    command += "    --remote-gdb-port=0 \\\n"
                    command += "    --outdir=m5out/" + folder + " \\\n"
                    command += "    --stats-file=" + filename + "_stats.txt \\\n"
                    command += "    configs/dramsim2/diamond.py \\\n"
                    command += "    --fixaddr \\\n"
                    command += "    --cpu-type=" + cpu + " \\\n"
                    command += "    --caches \\\n"
                    command += "    --l2cache \\\n"
                    command += "    --l2config=shared \\\n"
                    command += "    --l2_size=2048kB \\\n"
                    command += "    --l2_assoc=16 \\\n"
                    command += "    --diamond_cache \\\n"
                    command += "    --dynamic_cache \\\n"
                    command += "    --fast-forward=1000000000 \\\n"
                    command += "    --maxinsts=250000000 \\\n"
                    command += "    --maxtick=2000000000000000 \\\n"
                    command += "    --numpids=3 \\\n"
                    command += "    --numcores=4 \\\n"
                    command += "    --L_assoc=8 \\\n"
                    command += "    --th_inc=" + str(threshold) + " \\\n"
                    command += "    --th_dec=" + str(threshold) + " \\\n"
                    command += "    --p0='" + specintinvoke[p0] + "'\\\n"
                    command += "    --p1='" + specintinvoke[p1] + "'\\\n"
                    command += "    --p2='" + specintinvoke[p2] + "'\\\n"
                    command += "    --p3='" + specintinvoke[p3] + "'\\\n"
                    command += "    > " + results_dir + "/" + folder + "/stdout_" + filename + ".out"

                    script.write("%s\n" % command)
                    script.close()
                    
                    os.system("qsub -cwd -e stderr/" + folder + "/ -o stdout/" + folder + "/ " +
                    scriptgen_dir + "/run_" + filename)

def count_phases():
    for cpu in cpus:
        for workload in multiprog:
            for H_min in H_mins:
                for threshold in thresholds:
                    p0 = workload[0]
                    p1 = workload[1]
                    filename = cpu + "_" + "phases" + "_" + p0 + "_" + p1 + "_" + str(H_min) + "_" + str(int(threshold*100))
                    script = open(scriptgen_dir + "/run_" + filename, "w")
                    command = "#!/bin/bash\n"
                    command += "build/ARM/gem5.fast \\\n"
                    command += "    --remote-gdb-port=0 \\\n"
                    command += "    --outdir=m5out/" + folder + " \\\n"
                    command += "    --stats-file=" + filename + "_stats.txt \\\n"
                    command += "    configs/dramsim2/dramsim2_se.py \\\n"
                    command += "    --fixaddr \\\n"
                    command += "    --cpu-type=" + cpu + " \\\n"
                    command += "    --caches \\\n"
                    command += "    --l2cache \\\n"
                    command += "    --l2config=shared \\\n"
                    command += "    --l2_size=1024kB \\\n"
                    command += "    --l2_assoc=8 \\\n"
                    command += "    --lattice_cache \\\n"
                    command += "    --dynamic_cache \\\n"
                    command += "    --fast-forward=1000000000 \\\n"
                    command += "    --maxinsts=250000000 \\\n"
                    command += "    --maxtick=2000000000000000 \\\n"
                    command += "    --numpids=2 \\\n"
                    command += "    --H_min=" + str(H_min) + " \\\n"
                    command += "    --th_inc=" + str(threshold) + " \\\n"
                    command += "    --th_dec=" + str(threshold) + " \\\n"
                    command += "    --p0='" + specintinvoke[p0] + "'\\\n"
                    command += "    --p1='" + specintinvoke[p1] + "'\\\n"
                    command += "    > " + results_dir + "/" + folder + "/stdout_" + filename + ".out"

                    script.write("%s\n" % command)
                    script.close()
                    
                    os.system("qsub -cwd -e stderr/" + folder + "/ -o stdout/" + folder + "/ " + 
                    scriptgen_dir + "/run_" + filename)
                    
def dumb_flush():
    for cpu in cpus:
        for workload in multiprog:
            for H_min in H_mins:
                for threshold in thresholds:
                    p0 = workload[0]
                    p1 = workload[1]
                    filename = cpu + "_" + "dynamic" + "_" + p0 + "_" + p1 + "_" + str(H_min) + "_" + str(int(threshold*100))
                    script = open(scriptgen_dir + "/run_" + filename, "w")
                    command = "#!/bin/bash\n"
                    command += "build/ARM/gem5.fast \\\n"
                    command += "    --remote-gdb-port=0 \\\n"
                    command += "    --outdir=m5out/" + folder + " \\\n"
                    command += "    --stats-file=" + filename + "_stats.txt \\\n"
                    command += "    configs/dramsim2/dramsim2_se.py \\\n"
                    command += "    --fixaddr \\\n"
                    command += "    --cpu-type=" + cpu + " \\\n"
                    command += "    --caches \\\n"
                    command += "    --l2cache \\\n"
                    command += "    --l2config=shared \\\n"
                    command += "    --l2_size=1024kB \\\n"
                    command += "    --l2_assoc=8 \\\n"
                    command += "    --dumb_flush \\\n"
                    command += "    --partition_cache \\\n"
                    command += "    --dynamic_cache \\\n"
                    command += "    --fast-forward=1000000000 \\\n"
                    command += "    --maxinsts=250000000 \\\n"
                    command += "    --maxtick=2000000000000000 \\\n"
                    command += "    --numpids=2 \\\n"
                    command += "    --H_min=" + str(H_min) + " \\\n"
                    command += "    --th_inc=" + str(threshold) + " \\\n"
                    command += "    --th_dec=" + str(threshold) + " \\\n"
                    command += "    --p0='" + specintinvoke[p0] + "'\\\n"
                    command += "    --p1='" + specintinvoke[p1] + "'\\\n"
                    command += "    > " + results_dir + "/" + folder + "/stdout_" + filename + ".out"

                    script.write("%s\n" % command)
                    script.close()
                    
                    os.system("qsub -cwd -e stderr/" + folder + "/ -o stdout/" + folder + "/ " + 
                    scriptgen_dir + "/run_" + filename)
# Main
# singleprog()
# miss_curve()
# nopar_cache()
# static_cache()
# dynamic_cache()
# utility_cache()
# nopar_cache4()
# static_cache4()
# dynamic_cache4()
# baseline_QoS()
# dynamic_QoS()
# diamond_cache()
# count_phases()
# dumb_flush()