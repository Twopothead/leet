# [AC] 441-arranging-coins
# @param {Integer} n
# @return {Integer}
def arrange_coins(n)
    t = Math.sqrt(2 * n).to_i
    return (t * (t + 1) > 2 * n) ? t - 1 : t
end