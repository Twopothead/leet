# 1502-can_make_arithmetic_progression bubble_sort
# @param {Integer[]} arr
# @return {Boolean}
def can_make_arithmetic_progression(arr)
    (arr.size-1).downto(1).each do |j|
        1.upto(j).each do |i|
            if arr[i]<arr[i-1]
                arr[i-1],arr[i] = arr[i],arr[i-1]
            end
        end
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

