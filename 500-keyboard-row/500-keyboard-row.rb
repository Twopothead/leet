# @param {String[]} words
# @return {String[]}
def find_words(words)
    return words.select{|w| issamerow(w)}
end

def issamerow(word)
    if(word.length==0||word.length==1)
        return true
    end
    h = {"q"=>1,"w"=>1,"e"=>1,"r"=>1,"t"=>1,"y"=>1,"u"=>1,"i"=>1,"o"=>1,"p"=>1,
        "a"=>2,"s"=>2,"d"=>2,"f"=>2,"g"=>2,"h"=>2,"j"=>2,"k"=>2,"l"=>2,
        "z"=>3,"x"=>3,"c"=>3,"v"=>3,"b"=>3,"n"=>3,"m"=>3}
    line = h[word.downcase[0]]
    word.downcase.each_char do |i|
        if h[i]!=line 
            return false
        end
    end
    return true
end
