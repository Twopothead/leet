#include <stdio.h>
#include <stdlib.h>
// 1 1 2 3 5
int climbStairs(int n){
    if(n==1||n==2)
        return 1;
    int *table = (int *) malloc((n+1) * sizeof(int));
    table[0] = 1,table[1]=1;
    for(int i=2;i<=n;i++)
        table[i] = table[i-1] + table[i-2];
    return table[n];
}
int main(){
    printf("%d ",climbStairs(2));
    printf("%d ",climbStairs(3));
    printf("%d ",climbStairs(4));
    return 0;
}
