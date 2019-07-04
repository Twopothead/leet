#include <stdio.h>
#include <stdlib.h>
int cal_hvalue(int n){
    int sum = 0;
    while (n)
    {
        printf("%d",n%10);
        sum += (n%10)*(n%10);
        n/=10;
    }
    printf("  %d",sum);
}
bool isHappy(int n){
    int a = (int)malloc(10*sizeof(int));
    int h = cal_hvalue(n);
    
}
int main(){
    isHappy(19);
    //printf("%d")
    return 0;
}