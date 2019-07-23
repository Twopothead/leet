int search(int* nums, int numsSize, int target){
    int lo = 0,hi = numsSize - 1, mid;
    while (lo<=hi)
    {
        mid = (lo + hi)/2;
        if(target == nums[mid])
            return mid;
        if(target < nums[mid])
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return -1;
}
