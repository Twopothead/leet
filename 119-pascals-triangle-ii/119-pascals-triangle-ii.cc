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
    int *r = (int *)malloc(sizeof(int)*(rowIndex+1));
    *returnSize = rowIndex+1;
    // if(rowIndex==0){//Input:0,Expected:[1]
    //     r[0] = 1;
    //     return r;
    // }
    int *t = (int *)malloc(sizeof(int)*(rowIndex+1));
    for(int i=0;i<=rowIndex;i++){
        r[i] = 0,t[i] = 0;
    }
    for(int i=0;i<=rowIndex;i++){
        if(i==0){
            t[0] = 1;
        }else{
            if(i%2!=0){
                for(int j=0;j<=i;j++){
                    if(j==0)
                        r[j] = t[j]; 
                    else
                        r[j] = t[j-1]+ t[j]; 
                }
            }else
            {
                for(int j=0;j<=i;j++){
                    if(j==0)
                        t[j] = r[j]; 
                    else 
                        t[j] = r[j-1]+ r[j]; 
                }
            }
            
        }
    }
    if(rowIndex%2!=0){
        free(t);
        return r;
    }else{
        free(r);
        return t;
    } 
}
int main(){
    int *returnSize = (int*)malloc(sizeof(int));
    *returnSize = 0;
    //int *r = getRow(2,returnSize);
    // int *r = getRow(4,returnSize);
    // int *r = getRow(3,returnSize);
    int *r = getRow(5,returnSize);
    //  int *r = getRow(0,returnSize);

    for(int i=0;i<*returnSize;i++){
        printf("%d ",r[i]);
    }
    return 0;
}
