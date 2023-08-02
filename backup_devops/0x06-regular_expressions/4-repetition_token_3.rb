#!/usr/bin/env ruby
# find the regular expression that will match the below cases
# hbn
# hbttn
# hbtttn
# hbttttn
puts ARGV[0].scan(/hbt*n/).join
