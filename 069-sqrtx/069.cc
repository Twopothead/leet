#include <stdio.h>
#include <stdlib.h>
// 2147483647
// testcase: 2147483647
// runtime error: signed integer overflow: 46341 * 46341 cannot be represented in type 'int' (solution.c)
int mySqrt(int x){
    for(int i=0;i<=x;i++){
        if(i>=46341)
            return 46340;
        if(i*i>x)
            return i-1;
        if(i*i==x)
            return i;
    }
    return 0;
}
int main(){
    printf("%d ",mySqrt(1));   
    printf("%d ",mySqrt(4));   
    printf("%d ",mySqrt(8));   
    printf("%d ",mySqrt(16));   
    printf("%d ",mySqrt(121));   
    printf("%d ",mySqrt(122));   
    printf("%d ",mySqrt(2147483647)); 
    printf("%d ",mySqrt(2147395599));// 2147395599 46339
    return 0;
}
