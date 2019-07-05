#include <stdio.h>
#include <stdlib.h> 
// 1
// 1    1
// 1    2   1
// 1    3   3   1
// 1    4   6   4   1
// 1    5   10  10  5   1 
// 1    6   15  20  15  6   1
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize){
    int *r = (int*)malloc(sizeof(int)*(rowIndex+1));
    *returnSize = rowIndex+1;
    // r[0] = 1,r[1] = rowIndex,r[rowIndex-1] = rowIndex,r[rowIndex] = 1;
    for(int i=0;i<=rowIndex;i++){
        r[i] = 1;
    }
    r[0] = 1;
    r[1] = 1;
    // r[rowIndex] = 1;
    for(int i=0;i<rowIndex;i++){
        if(i!=0){
            r[i] = r[i] + r[i-1];
        }
    } 
    return r;
}
int main(){
    int *returnSize = (int*)malloc(sizeof(int));
    *returnSize = 0;
    int *r = getRow(3,returnSize);
    for(int i=0;i<*returnSize;i++){
        printf("%d ",r[i]);
    }
    return 0;
}
