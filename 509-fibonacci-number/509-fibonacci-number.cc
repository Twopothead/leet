#include <stdio.h>
#include <stdlib.h>
int fib(int N){
    if(N==0)
        return 0;
    if(N==1)
        return 1;
    if(N==2)
        return 1;
    int *table = (int *) malloc((N+1) * sizeof(int));
    table[0] = 0,table[1]=1;
    for(int i=2;i<=N;i++)
        table[i] = table[i-1] + table[i-2];
    return table[N];
}   
//  2   3   4
//  1   2   3
int main(){
    printf("%d ",fib(2));
    printf("%d ",fib(3));
    printf("%d ",fib(4));
    return 0;
}
