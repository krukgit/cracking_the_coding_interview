def all_unique(string)
  string.length == string.split('').uniq.length
end

fail unless all_unique ""
fail unless all_unique "alqwerty"
fail if all_unique "ala"
fail unless  all_unique "zcl_A@#$%12~`k"
