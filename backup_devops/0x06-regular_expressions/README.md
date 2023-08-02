# 0x06.Regular expression

A regular expression, commonly called a "regexp", is a sequence of characters
that define a search pattern. It is mainly for use in pattern matching with
strings, or string matching(i.e it operates like a "find and replace" command).
While it is a very powerful tool, it is also complex.

## Background Context
For this project, you have to build your regualar expression using Oniguruma,
the default regular expression library used by Ruby.

The focus of this exercise is to play with regular expressions(regex). Here is
the Ruby code that you should use, just replace the regex part(which is the
code in between the `//`):
```ruby
# example.rb

#!/usr/bin/env ruby
puts ARGV[0].scan(/127.0.0.[0-9]/).join

```

## Resources
- [Regular expressions - basics](https://www.slideshare.net/neha_jain/introducing-regular-expressions)
- [Regular expressions - advanced](https://www.slideshare.net/neha_jain/advanced-regular-expressions-80296518)
- [Fun article about regular expression usage](https://blog.codinghorror.com/regular-expressions-now-you-have-two-problems/)
- [JavaScript Regexp Reference](https://www.w3schools.com/jsref/jsref_obj_regexp.asp)



## Practise platforms
- [PHP/Javascript/Python](https://regex101.com/)
- [Ruby](https://rubular.com/)
- [Learn Regular Expression with simple, interactive exercise](https://regexone.com/)
