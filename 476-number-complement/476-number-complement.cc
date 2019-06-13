
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
#include <inttypes.h>
int findComplement(int num){
    int count = 0;
    int flag = 0;
    int complement = num;
    for(int i=31;i>=0;i--){
        if(num & UINT32_C(1) << i )
            flag = 1;
        if(flag){
            if(num & UINT32_C(1) << i )
                complement &= ~(UINT32_C(1) << i);
            else
                complement |= ( UINT32_C(1) << i);
        }
    }
    return complement;
}

int main(){
    int n=-2147483648;
    printf("%d",findComplement(n));
    printf("\n%d",findComplement(5));
    printf("\n%d",findComplement(1));
    return 0;
}
