class String
  def permutation? other
    self.length == other.length &&
      self.split('').sort == other.split('').sort
  end
end

puts "ala".permutation? "aal"
puts "12345567".permutation? "12345675"
puts "12345567".permutation? "12345676"
