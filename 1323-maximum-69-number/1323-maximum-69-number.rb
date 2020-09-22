# [AC] 1323-maximum-69-number
# @param {Integer} num
# @return {Integer}
def maximum69_number (num)
    r = 0
    flag = true
    num.to_s.each_char{|t|
        if(flag && t == '6')
            r += 9
            flag = false
        else
            r += t.to_i
        end
        r *= 10
    }
    r /= 10
    return r    
end