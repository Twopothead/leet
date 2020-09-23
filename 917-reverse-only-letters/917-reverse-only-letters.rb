# [AC] 917-reverse-only-letters
# @param {String} s
# @return {String}
def is_az(c)
    return (c.ord >= "a".ord) && (c.ord <= "z".ord) # a97 z122
end
def is_AZ(c)
    return (c.ord >= "A".ord) && (c.ord <= "Z".ord) # A65 Z90
end
def is_letter(c)
    return (is_az(c) or is_AZ(c))
end
def reverse_only_letters(s)
    arr = []
    s.each_char{|c|
        if(is_letter(c))
            arr.push(c)
        end
    }
    arr.reverse
    result = []
    s.each_char{|c|
        if(is_letter(c))
            result.push(arr.pop)
        else
            result.push(c)
        end
    }
    return result.join("")    
end