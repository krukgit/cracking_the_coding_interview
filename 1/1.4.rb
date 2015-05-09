def url_safe str, n
  str = str[0...n].gsub(' ', '%20')
end

puts "|#{url_safe "Mr John Smith    ", 13}|"
