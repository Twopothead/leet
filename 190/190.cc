#include <inttypes.h>
#include <stdio.h>
uint32_t reverseBits(uint32_t n) {
#define set_bit(nr, addr) ({\
    register int res ; \
    __asm__ __volatile__("btsl %2,%3\n\tsetb %%al": \
    "=a" (res):"0" (0),"r" (nr),"m" (*(addr))); \
    res; })
#define get_bit(nr,value) ( (value>>nr) & 0x1) ? 1:0
    int r=0;
    for(int i=0;i<32;i++){
        if(get_bit(i,n))
           set_bit(32-i-1,&r); 
    }
    return r;
}
int main(){
    int number = 43261596;
    for(int i=31;i>=0;i--)
        printf("%x",get_bit(i,number));
    printf("\n");
    for(int i=31;i>=0;i--)
        printf("%x",get_bit(i,reverseBits(number)));
    printf("\n%d",reverseBits(43261596));
    printf("\n%u",reverseBits(4294967293));
}