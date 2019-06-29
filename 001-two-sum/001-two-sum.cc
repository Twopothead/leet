#include <iostream>
#include <stdio.h>
#include <stdlib.h>
/*
 * @lc app=leetcode id=1 lang=c
 *
 * [1] Two Sum
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int * array = NULL;
    *returnSize = 2;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
                if(nums[i]+nums[j]==target){
                   array = (int *)malloc((*returnSize)*sizeof(int));
                   array[0] = i;
                   array[1] = j;
                   return array;
                }
        }   
    }
    return array;
}
// [0,4,3,0]
// 0
// [-3,4,3,90]
// 0
int main(){
    int * nums, * returnSize;
    int numsSize = 4,target=0;
    nums = (int *)malloc(numsSize*sizeof(int));
    returnSize = (int *)malloc(sizeof(int));
    target=9,nums[0]=2,nums[1]=7,nums[2]=11,nums[3]=15;
    // target=0,nums[0]=0,nums[1]=4,nums[2]=3,nums[3]=0;
    // target=0,nums[0]=-3,nums[1]=4,nums[2]=3,nums[3]=90;
    *returnSize = 0;
    printf("%d,%d",twoSum(nums,numsSize,target,returnSize)[0],twoSum(nums,numsSize,target,returnSize)[1]);
    // free(nums);
    // free(returnSize);
}