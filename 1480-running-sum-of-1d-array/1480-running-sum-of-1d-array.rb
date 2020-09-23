# [AC] 1480-running-sum-of-1d-array
# @param {Integer[]} nums
# @return {Integer[]}
def running_sum(nums)
    r = 0
    result = []
    nums.each{|t|
        r += t
        result.push(r)
    }
    return result    
end
