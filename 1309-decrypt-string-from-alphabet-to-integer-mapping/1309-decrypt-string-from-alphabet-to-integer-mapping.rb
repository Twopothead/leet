# [AC] 1309-decrypt-string-from-alphabet-to-integer-mapping
# @param {String} s
# @return {String}
def freq_alphabets(s)
    r = []
    s.each_char{|c|
        if(c!="#")
            r.push(c.ord-"1".ord+1)
        else
            r.push(r.pop+10*r.pop)
        end
    }
    s = ""
    r.each{|t|
        s += (t+"a".ord-1).chr
    }
    return s
end