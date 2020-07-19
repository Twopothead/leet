# @param {Integer[]} nums
# @return {Integer}
def missing_number(nums)
    x =[0..(nums.size)]
    for i in 0..(nums.size)
        x[i] = i
    end
    for i in 0..(nums.size-1)
        x[nums[i]]=-1
    end
    for i in 0..(x.size-1)
        if(x[i]!=-1)
            return x[i]
        end
    end
end
