#include <stdio.h>
#include <stdlib.h>
// 2147483647
int mySqrt(int x){
    for(int i=1;i<=x/2;i++){
        if(i*i>x)
            return i-1;
        if(i*i==x)
            return i;
    }
    return 0;
}
int main(){
    printf("%d ",mySqrt(4));   
    printf("%d ",mySqrt(8));   
    printf("%d ",mySqrt(16));   
    printf("%d ",mySqrt(121));   
    printf("%d ",mySqrt(122));   
    return 0;
}
