# 1502-can_make_arithmetic_progression selection_sort
# @param {Integer[]} arr
# @return {Boolean}
def can_make_arithmetic_progression(arr)
    0.upto(arr.size-2).each do |j|
        min_index = j
        (j+1).upto(arr.size-1).each do |i|
            min_index = i if arr[i] < arr[min_index]
        end
        arr[j],arr[min_index] = arr[min_index],arr[j]
    end
    diff = arr[1]-arr[0]
    is_can = true
    1.upto(arr.size-1).each do |i|
        if diff != arr[i]-arr[i-1]
            is_can = false
        end
    end
    return is_can
end
