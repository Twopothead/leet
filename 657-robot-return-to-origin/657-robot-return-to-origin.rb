# [AC] 657-robot-return-to-origin
# @param {String} moves
# @return {Boolean}
def judge_circle(moves)
    ud = 0
    lr = 0
    moves.each_char{|c|
        case c
            when 'L'
                lr += 1
            when 'R'
                lr -= 1
            when 'U'
                ud += 1
            when 'D'
                ud -= 1
        end
    }
    return (lr==0) && (ud==0)    
end