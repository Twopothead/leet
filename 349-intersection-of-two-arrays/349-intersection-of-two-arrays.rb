# @param {Integer[]} nums1
# @param {Integer[]} nums2
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
def insert_sort(indices)
    for i in 0..(indices.size-1)
        for j in i.downto(1)
          if(indices[j-1]>indices[j]) then
                indices[j-1],indices[j]=indices[j],indices[j-1]
            end
        end
    end
    return indices
end
def intersection(nums1, nums2)
    nums1 = nums1.uniq
    nums2 = nums2.uniq
    result = []
    if(nums1.size<=nums2.size)
        nums2 = insert_sort(nums2)
    else
        t = nums2
        nums2 = insert_sort(nums1)
        nums1 = t
    end
    for i in 0..(nums1.size-1)
        if(binary_search(nums1[i],nums2)>=0)
            result.push(nums1[i])
        end
    end
    return result 
end