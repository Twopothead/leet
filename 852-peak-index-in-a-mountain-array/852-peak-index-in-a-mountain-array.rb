# [AC] 852-peak-index-in-a-mountain-array
# @param {Integer[]} arr
# @return {Integer}
def checkpeak(arr,mid)
    if(mid == 0)
        return arr[0] > arr[1]
    end
    if(mid == arr.size - 1)
        return arr[arr.size - 1] > arr[arr.size - 2]
    end
    return (arr[mid]>arr[mid-1]) && (arr[mid]>arr[mid+1])
end
def peak_index_in_mountain_array(arr)
    lo = 0
    hi = arr.size - 1
    begin
        mid = lo + (hi - lo) / 2
        if(checkpeak(arr,mid))
            return mid
        end
        if(arr[mid] < arr[mid+1])
            lo = mid + 1
        end
        if(arr[mid] < arr[mid-1])
            hi = mid - 1
        end
        if(arr[mid] >= arr[mid+1] && 
            arr[mid] >= arr[mid-1])
            return mid
        end
    end while  lo<=hi
    return -1
end