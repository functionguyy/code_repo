#!/usr/bin/env ruby
# find the regular expression that will match the below cases
# hbttn
# hbttttn
puts ARGV[0].scan(/hbt{2,5}n/).join
