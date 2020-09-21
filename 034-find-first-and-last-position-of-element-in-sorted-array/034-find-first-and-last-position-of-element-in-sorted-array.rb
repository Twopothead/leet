# [AC] 034-find-first-and-last-position-of-element-in-sorted-array
# @param {Integer[]} nums
# @param {Integer} target
# @return {Integer[]}
def binary_search(key,indices)
    lo = 0
    hi = indices.size - 1
    begin 
        mid = lo + (hi - lo) / 2
        if(key < indices[mid])
            hi = mid - 1
        elsif(key > indices[mid])
            lo = mid + 1
        else
            return mid
        end
    end while lo <= hi
    return -1
end
def search_range(nums, target)
    if(nums.size==0)
        return [-1,-1]
    end
    r = binary_search(target,nums)
    if(r==-1)
        return [-1,-1]
    end
    lo = r
    hi = r
    result = []
    for i in r.downto(0)
        if(nums[i]!=target)
            lo=i+1
            result.push(lo)
            break
        end
    end
    if(result.size==0)
        result.push(0)
    end
    for i in r..(nums.size-1)
        if(nums[i]!=target)
            hi=i-1
            result.push(hi)
            break
        end
    end
    if(result.size<2)
        result.push(nums.size-1)
    end
    return result
end

# Testcase
# nums = [5,7,7,8,8,10]
# target = 8
# nums = []
# target = 0
# nums = [5,7,7,8,8,10]
# target = 6
# nums =[2,2]
# target =2