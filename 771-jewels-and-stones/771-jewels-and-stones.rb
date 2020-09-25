# [AC] 771-jewels-and-stones
# @param {String} j
# @param {String} s
# @return {Integer}
def num_jewels_in_stones(j, s)
    h = {}
    j.each_char{|t|
        h.store(t,1) 
    }
    r = 0
    s.each_char{|t|
        if(h.has_key?(t))
            r += 1
        end
    }
    return r
end