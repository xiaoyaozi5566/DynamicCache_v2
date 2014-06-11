require_relative 'parsers'
include Parsers

$mem_latency = /system.l3.overall_avg_miss_latency::total (\d*.\d*)/
$l3_miss = /system.l3.overall_misses::total[\s]*(\d*)/

def get_stats( conf = {} )
    conf = {
        bench: $specint-%w[bzip2],
        scheme: "none",
        cpu: "detailed",
    }.merge conf
    conf[:otherbench] = conf[:otherbench] || conf[:bench]

    conf[:bench].inject({}) {|hsh,p0|
        hsh[p0] = avg_arr(
            conf[:otherbench].inject([]) {|p0stats,p1|
                datum, found = get_datum(
                    m5out_file( conf.merge( p0:p0, p1:p1 ) ),
                    conf[:regex]
                )
                p0stats << datum.to_f if found
                p0stats
            }
        ); hsh
    }
end

def compare_stats( conf = {} )
    conf = {
        bench: $specint-%w[bzip2],
        cpu: "detailed",
        scheme: "tp",
        base_scheme: "none",
    }.merge conf
    conf[:otherbench] = conf[:otherbench] || conf[:bench]

    conf[:bench].inject({}) {|hsh,p0|
        hsh[p0] = avg_arr(
            conf[:otherbench].inject([]) {|p0stats,p1|
                p = conf.merge( p0:p0, p1: p1 )
                datum, found = get_datum(
                    m5out_file( p ),
                    conf[:regex]
                )
                datum_base, found_base = get_datum(
                    m5out_file(
                        p.merge(
                            scheme: conf[:base_scheme],
                            nametag: conf[:base_nametag]
                        )
                    ),
                    conf[:regex]
                )
                p0stats << overhead(
                    datum.to_f, datum_base.to_f ) if found && found_base
                p0stats
            }
        ); hsh
    }
end

if __FILE__ == $0
    input_dir = ARGV[0].to_s
    result_dir = ARGV[1].to_s
    
    FileUtils.mkdir_p( result_dir ) unless File.directory?( result_dir )
    
    mpki = get_stats( dir: input_dir, regex: $l3_miss ).to_a.inject({}){|hsh,kv|
        hsh[kv[0]] = kv[1] * 1000 / 10**6
        hsh
    }
    puts "Baseline memory requests per thousand instructions: \n" + mpki.to_s
    hash_to_csv( mpki, result_dir+"/mpki.csv" )

    baseline_latency = get_stats( scheme: "none", dir: input_dir, regex: $mem_latency )
    puts "Baseline Memory Latency: \n" + mpki.to_s
    hash_to_csv( baseline_latency, result_dir+"/baseline_latency.csv" )

    secure_latency = get_stats( scheme: "tp", dir: input_dir, regex: $mem_latency )
    puts "Secure Baseline Memory Latency: \n" + secure_latency.to_s
    hash_to_csv(  secure_latency, result_dir+"/secure_latency.csv" )

    latency_overhead = compare_stats( dir: input_dir, regex: $mem_latency )
    puts "Memory Latency Overhead: \n" + latency_overhead.to_s
    hash_to_csv( latency_overhead, result_dir+"/latency_overhead.csv" )
end
