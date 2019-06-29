
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
//C语言中int的取值范围为：-2147483648 ~  2147483647
int reverse(int x){
    int origin = x,tmp = 0,r = 0;
    if(x==2147483647)
        return 0;
    while (x)
    {
       r*=10;
       tmp = x%10;
       x/=10;
       r += tmp;
    }
    return r;
}

int main(){
    int x = 123;
    printf("%d\n",reverse(x));
    x = -123;
    printf("%d\n",reverse(x));
    x = 120;
    printf("%d",reverse(x));
    return 0;
}