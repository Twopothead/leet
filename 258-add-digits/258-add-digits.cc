#include <iostream>
int s(int num){
    int sum = 0;
    while (num){
        sum +=num%10;
        num/=10;
    }
    return sum;
}
int addDigits(int num){
    int sum = s(num);
    while (sum>=10)
    {
        num = sum;
        sum = s(num);
    }
    return sum;
}
int main(){
    int num = 38;
    num = 19;
    printf(" %d",addDigits(num));
}












