#include <stdio.h>
#include <stdlib.h>
struct List{
    int val;
    struct List *next;
};
int singleNumber(int* nums, int numsSize){
    struct List *list,*tail;
    struct List *p=list;
    list = (struct List *)malloc(sizeof(struct List));
    tail = list;
    for(int i=0;i<numsSize;i++){
        struct List *q;
        q =  (struct List *)malloc(sizeof(struct List));
        q->val = nums[i];
        tail->next = q;
        tail = tail->next;
        p = list;
        while (p)
        {
        // printf("%d ",p->val);
        if(p->val == q->val && p!=q )
            printf("fuck");
        p=p->next;
        }
    }



    
}
int main(){
    int *nums;
    // int numsSize = 3;
    // nums = (int*)malloc(numsSize*sizeof(int));
    // nums[0] = 2,nums[1] = 2,nums[2] = 1;
    int numsSize = 5;
    nums = (int*)malloc(numsSize*sizeof(int));
    nums[0] = 4,nums[1] = 1,nums[2] = 2;
    nums[3] = 1,nums[4] = 2;
    singleNumber(nums,numsSize);
    return 0;
}
