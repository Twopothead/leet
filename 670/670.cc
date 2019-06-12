/*
 * @lc app=leetcode id=670 lang=c
 *
 * [670] Maximum Swap
 */

#include <stdio.h>
void get_digit(int num){
    while (num)
    {
        printf("%d ",num%10);
        num/=10;
    }
    
}
int maximumSwap(int num){

}
int main(){
    get_digit(61230);

}