#include <stdio.h>
#include <stdlib.h>
bool isPowerOfThree(int n){

}
bool isPowerOfFour(int num){
    if(num<=0)
        return false;
    for(int i=0;i<=31;i+=2){
        if(num==1<<i)
            return true;
    }
    return false;
}
int main(){
    printf("%d ",isPowerOfFour(1));
    printf("%d ",isPowerOfFour(16));
    printf("%d ",isPowerOfFour(2));
    printf("%d ",isPowerOfFour(32));
    printf("%d ",isPowerOfFour(31));
    printf("%d ",isPowerOfFour(16));
    printf("%d ",isPowerOfFour(4));
    printf("%d ",isPowerOfFour(5));
    return 0;
}