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
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

 //	returnSize —— 修改后行数
 //	returnColunmSizes —— 修改后每行列数
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    returnSize[0] = numRows;
    *returnColumnSizes = NULL;
    if(numRows<=0)
        return NULL;
    *returnColumnSizes = (int *)malloc(numRows*sizeof(int));
    for(int i=0;i<numRows;i++){
        (*returnColumnSizes)[i] = i+1;//括号很重要!
    }
    int **arr = (int **)malloc(numRows*(sizeof(int*)));
    for(int i=0;i<numRows;i++){
        arr[i] = (int *)malloc((i+1)*sizeof(int));
        arr[i][0] = 1; arr[i][i] = 1;
        for(int j=1;j<i;j++){
            arr[i][j] = arr[i-1][j-1]+arr[i-1][j]; 
        }
    }
    return arr;
}
int main(){
    int numRows = 5;
    int *returnSize = (int*)malloc(sizeof(int));
    int **returnColumnSizes =  (int**)malloc(sizeof(int));
    *returnSize = 0;
    int **arr = generate(numRows,returnSize,returnColumnSizes);
    for(int i=0;i<*returnSize;i++){
        for(int j=0;j<(*returnColumnSizes)[i];j++){//括号很重要!
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}