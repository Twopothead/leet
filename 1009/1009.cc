#include <stdio.h>
#include <inttypes.h>
#define get_bit(nr,value) ( (value>>nr) & 0x1) ? 1:0
int bitwiseComplement(int N){
    int bits = 0,num = N;
    uint32_t _N = N;
    for(uint32_t i=30;i>=0;i--){
            if((~ ( _N | (~(UINT32_C(1)<<i)) )) != (UINT32_C(1)<<i)){
                    bits = i+1;
                    break;
            }  
    }
    for(uint32_t i=30;i>=bits;i--){
        N |= (1<<i);
    }
    N = ~N;
    if(num>0)
        N &=  ~(UINT32_C(1)<<31);
    return N;
}
int main(){
    printf("%u ",bitwiseComplement(5));
    printf("%u ",bitwiseComplement(7));
    printf("%u ",bitwiseComplement(10));
    for(int i=31;i>=0;i--)
        printf("%x",get_bit(i,4294967295));
    return 0;
}