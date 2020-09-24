# [AC] 012-integer-to-roman
# @param {Integer} num
# @return {String}
def int_to_roman(num)
    v = [1,4,5,9,10,40,50,90,100,400,500,900,1000]
    r = ["I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"]
    result = ""
    for i in (v.size-1).downto(0)
        while(num >= v[i])
            result += r[i]
            num -= v[i]
        end
        if(num<0)
            break
        end
    end
    return result    
end
