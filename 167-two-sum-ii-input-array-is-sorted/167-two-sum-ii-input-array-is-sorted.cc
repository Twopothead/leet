#include <stdio.h>
#include <stdlib.h>
int binarysearch(int* nums, int numsSize, int target){
    int lo = 0,hi = numsSize-1;
    int mid = 0;
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
    return -1;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    *returnSize = 2;
    int index = 0;
    int *r = (int *)malloc((*returnSize)*sizeof(int));
    for(int i=0;i<numbersSize;i++){
        index = binarysearch(numbers,numbersSize,target-numbers[i]);
        if(i>index)
            index = -1;
        if(i==index){
            int tmp = numbers[i];
            int before_target = target-numbers[i];
            numbers[i] = target-numbers[i]-1;
            index = binarysearch(numbers,numbersSize,before_target);
            numbers[i] = tmp;
            if(i>index)
                index = -1;
        }
        if(index != -1){
            r[0] = i+1;
            r[1] = index+1;
            return r;
        }
    }
    return r;
}
int main(){
    return 0;
}