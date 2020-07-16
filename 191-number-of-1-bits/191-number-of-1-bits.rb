# 191-number-of-1-bits
# @param {Integer} n, a positive integer
# @return {Integer}
def hamming_weight(n)
    n.to_s(2).gsub('0','').length
end
