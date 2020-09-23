# [AC] 977-squares-of-a-sorted-array
# @param {Integer[]} a
# @return {Integer[]}
def sorted_squares(a)
    return a.map{|t|
        t * t
    }.sort
end
