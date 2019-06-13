
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
#include <inttypes.h>
bool isPowerOfTwo(int n){
    int count = 0;
    for(int i=31;i>=0;i--)
        if(n & UINT32_C(1) << i )
            count++;
    return (count==1) && !(n & UINT32_C(1) << 31 );// -2147483648 false
}
int main(){
    int n=-2147483648;
    printf("%d",isPowerOfTwo(n));

    return 0;
}
