# @param {String} s
# @return {Boolean}
def check_record(s)
    r = 1
    s.gsub("LLL","F").gsub("P","").each_char do |c|
        if(c=="A")
            r-=1
        elsif(c=="F")
            return false
        end
    end
    return r>=0
end
