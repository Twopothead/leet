#include <stdio.h>
#include <stdlib.h>
void rotate(int* nums, int numsSize, int k){
    int *extra = (int*)malloc(k*sizeof(int));
    int l2 = numsSize-k;
    while (l2<0)
        l2+=numsSize;
    l2 %= numsSize;
    int *extra2 = (int*) malloc(l2*sizeof(int));
    for(int i=0;i<k;i++)
        extra[i]=nums[l2+i];
    for(int i=0;i<l2;i++)
        extra2[i]=nums[i];
    for(int i=0;i<k;i++)
        nums[i] = extra[i];
    for(int i=0;i<l2;i++)
        nums[k+i] = extra2[i];
    for(int i=0;i<numsSize;i++)
        printf("%d ",nums[i]);
}
    // for(int i=0;i<k;i++)
    //     printf("%d ",extra[i]);
    //         printf("\n");
    // for(int i=0;i<numsSize-k;i++)
    //   printf("%d ",extra2[i]);
    // printf("\n");
    // for(int i=0;i<numsSize;i++)
    //     printf("%d ",nums[i]);
int main(){
    int nums[7]={1,2,3,4,5,6,7};
    rotate(nums,7,3);
    // int nums[4]={-1,-100,3,99};
    // rotate(nums,4,2);
    // int nums[1]={-1};
    // rotate(nums,1,2);
    return 0;
}
