#!/usr/bin/env ruby
# Regular expression that will match a string that starts with h end withs n
# and can have any single character in between
puts ARGV[0].scan(/h.n/).join
