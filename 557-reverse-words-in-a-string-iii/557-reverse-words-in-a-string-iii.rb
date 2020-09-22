# [AC] 557-reverse-words-in-a-string-iii
# @param {String} s
# @return {String}
def reverse_words(s)
    r = []
    s.split(" ").each{|w|
        r.push(w.reverse)
    }
    return r.join(" ")    
end