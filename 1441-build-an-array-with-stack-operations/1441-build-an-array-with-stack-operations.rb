# [AC] 1441-build-an-array-with-stack-operations
# @param {Integer[]} target
# @param {Integer} n
# @return {String[]}
def build_array(target, n)
    result = []
    p = 0
    i = 0
    begin
        p += 1
        if(target[i]==p)
            result.push("Push")
            i += 1       
        elsif(target[i]>p)
            begin 
                result.push("Push")
                result.push("Pop")
                p += 1
            end while(p<target[i])
            p-=1
        end
    end while(p<n and i<target.size)
    return result
end