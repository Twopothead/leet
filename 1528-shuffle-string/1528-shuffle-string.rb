# [AC] 1528-shuffle-string.rb
# @param {String} s
# @param {Integer[]} indices
# @return {String}
def restore_string(s, indices)
    for i in 0..(indices.size-1)
        for j in i.downto(1)
          if(indices[j-1]>indices[j]) then
                indices[j-1],indices[j]=indices[j],indices[j-1]
                s[j-1],s[j] = s[j],s[j-1]
            end
        end
    end
    return s
end