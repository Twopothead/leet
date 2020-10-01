# [AC] 1232-check-if-it-is-a-straight-line
# @param {Integer[][]} coordinates
# @return {Boolean}
def check_straight_line(coordinates)
    i = 0
    front = [0,0]
    diff = [0,0]
    before = [0,0]
    if(coordinates[0][0] == coordinates[1][0])
        for i in 0..coordinates.size-1
            if(coordinates[i][0]!=coordinates[0][0])
                return false
            end
        end
        return true
    end
    if(coordinates[0][1] == coordinates[1][1])
        for i in 0..coordinates.size-1
            if(coordinates[i][1]!=coordinates[0][1])
                return false
            end
        end
        return true
    end
    for xy in coordinates
        if(i>=1)
            diff[0] = xy[0]-front[0]
            diff[1] = xy[1]-front[1]
            if(diff[0]==0)
                return false
            end
            k1 = diff[1]/diff[0]
            if(before[0] == 0 && i == 1)
                k2 = k1
            elsif(before[0] == 0 && i != 1)
                return false
            else
                k2 = before[1] / before[0]
            end
            if(k2 != k1 && i != 1)
                return false
            end
        end
        before = diff.dup #需要深拷贝
        front = xy
        i += 1
    end
    return true
end