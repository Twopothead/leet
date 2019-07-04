#include <stdio.h>
#include <stdlib.h>
// testcase: 2147483647
// runtime error: signed integer overflow: 46341 * 46341 cannot be represented in type 'int' (solution.c)
bool isPerfectSquare(int num){
    for(int i=0;i<=num;i++){
        if(i>=46341)
            break;
        if(i*i>=num){
            if(i*i==num)
                return true;
            if( (i-1)*(i-1)==num )
                return true;
            break;
        }
    }
    return false;
}
int main(){
    printf("%d ",isPerfectSquare(16));
    printf("%d ",isPerfectSquare(14));
    printf("%d ",isPerfectSquare(120));
    printf("%d ",isPerfectSquare(2147483647));

    return 0;
}