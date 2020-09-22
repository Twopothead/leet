# [AC] 541-reverse-string-ii
# @param {String} s
# @param {Integer} k
# @return {String}
def reverse_str(s, k)
    i = 0
    flag = true
    r = []
    t = "placeholder"
    isbreak = false 
    begin 
        if((i+1)*k-1<s.size)
            sub = s[i*k..(i+1)*k-1]
        else
            sub = s[i*k..s.size-1]
            isbreak = true
        end
        i += 1
        t = ((flag) ? (sub.chars.reverse_each.to_a.join) : sub)
        r.push(t)
        flag = !flag
        if(isbreak)
            return r.join("")
            break
        end
    end while(true)
end