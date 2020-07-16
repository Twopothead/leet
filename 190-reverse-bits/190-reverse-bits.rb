# 190-reverse-bits
# @param {Integer} n, a positive integer
# @return {Integer}
def reverse_bits(n)
    Integer(['0b',("%032b" % n).to_s.reverse].join)
end

