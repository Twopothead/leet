# [AC] 1486-xor-operation-in-an-array
# @param {Integer} n
# @param {Integer} start
# @return {Integer}
def xor_operation(n, start)
    arr = Array.new(n){|index| 
        start + 2 * index 
    }
    r = 0
    arr.each{|i|
        r^=i
    }
    return r    
end
