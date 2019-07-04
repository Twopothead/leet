#include <stdio.h>
#include <stdlib.h>
int isUgly(int num){
    if(num<=0)
        return false;
    while (num%5==0)
    {
        num/=5;
    }
    while (num%2==0){
        num/=2;
    }
    while (num%3==0)
    {
        num/=3;
    }
    return (num==1);
}
int main(){
    printf("%d ",isUgly(6));
    printf("%d ",isUgly(8));
    printf("%d ",isUgly(14));
    printf("%d ",isUgly(0));
    printf("%d ",isUgly(-1));
    return 0;
}