#include <stdio.h>
#include <stdlib.h>

void reverseString(char* s, int sSize){
    for(int i=0;i<sSize/2;i++){
        s[i] = s[i] ^ s[sSize-i-1];
        s[sSize-i-1] = s[i] ^ s[sSize-i-1];
        s[i] = s[i] ^ s[sSize-i-1];
    }
}
        //  = s[sSize-i-1]^t;
        // s[sSize-i-1] = s[i]^t;

        // t = s[i];
        // s[i] = s[sSize-i-1];
        // s[sSize-i-1] =t;
        // printf("%c ",t);
// 如：A=A^B;B=A^B;A=A^B;
// 原理：利用一个数异或本身等于０和异或运算符合交换率。
int main(){
    // char s[5] = {'h','e','l','l','o'};
    // reverseString(s,5);
    char s[6] = {'H','a','n','n','a','h'};
        reverseString(s,6);
    printf("%s",s);
    return 0;
}