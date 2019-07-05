#include <stdio.h>
#include <stdlib.h>
bool isPowerOfThree(int n){
    if(n<=0)
        return false;
    return ( ( n == 1 ) ||( n == 3 ) ||( n == 9 ) ||( n == 27 ) ||( n == 81 ) ||( n == 243 ) ||( n == 729 ) ||( n == 2187 ) ||( n == 6561 ) ||( n == 19683 ) ||( n == 59049 ) ||( n == 177147 ) ||( n == 531441 ) ||( n == 1594323 ) ||( n == 4782969 ) ||( n == 14348907 ) ||( n == 43046721 ) ||( n == 129140163 ) ||( n == 387420489 ) ||( n == 1162261467 ) );
}

int main(){
    printf("%d ",isPowerOfThree(27));
    printf("%d ",isPowerOfThree(0));
    printf("%d ",isPowerOfThree(9));
    printf("%d ",isPowerOfThree(45));
    printf("%d ",isPowerOfThree(31));
    printf("%d ",isPowerOfThree(16));
    printf("%d ",isPowerOfThree(4));
    printf("%d ",isPowerOfThree(5));
    return 0;
}