#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
int searchInsert(int* nums, int numsSize, int target){
    int lo = 0,hi = numsSize-1;
    int mid = 0;
    if(target<nums[lo])
        return 0;
    if(target>nums[hi])
        return numsSize;
    while (lo<=hi)
    {
        mid = (lo+hi)/2;
        if(target == nums[mid])
            return mid;
        if(target < nums[mid])
            hi = mid -1;
        else
            lo = mid +1;
    } 
    if(target>nums[mid])
        return mid+1;
    return mid;
}

int main(){

    return 0;
}