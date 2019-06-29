#include <iostream>
#include <stdio.h>
#include <stdlib.h>
/*
 * @lc app=leetcode id=9 lang=c
 *
 * [9] Palindrome Number
 */


bool isPalindrome(int x){
    if(x<0)
        return false;
    if(x==0)
        return true;
    if(x==2147483647)
        return false;
    int origin = x,tmp = 0,r = 0;
    while (x)
    {
       r*=10;
       tmp = x%10;
       x/=10;
       r += tmp;
    }
    if(origin==r)
        return true;
    return false;
}
int main(){
    int num  = 0;
    num = 1213;
    printf("%d %d\n",num,isPalindrome(num));
    num = 121;
    printf("%d %d\n",num,isPalindrome(num));
    num = -121;
    printf("%d %d\n",num,isPalindrome(num));
    num = 10;
    printf("%d %d\n",num,isPalindrome(num));
}


