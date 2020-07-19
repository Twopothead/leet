# @param {Integer} n
# @return {String}
def convert_to_title(n)
    s = ""
    f = 0
    while n>26 do
        f = (n%26==0)?1:0
        if(n%26==0)
            s = "Z".concat(s)
        else
            s = (n%26+"A".ord-1).chr.concat(s)
        end
        n/=26
        n-=f
    end
    s = ((n%26==0)?("Z"):(n%26+"A".ord-1).chr).concat(s)
    return s
end
