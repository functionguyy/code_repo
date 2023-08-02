#!/usr/bin/env ruby
# find the regular expression that will match the below cases
# htn
# hbtn
puts ARGV[0].scan(/hb{0,1}tn/).join
