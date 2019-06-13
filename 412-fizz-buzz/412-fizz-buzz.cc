
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int length(int num){
    int len = 1;
    while (num!=0){
        num/=10;
        len++;
    }
    return len+2;
}
char ** fizzBuzz(int n, int* returnSize){
    char **words=(char **)malloc(n*sizeof(char*));;
    *returnSize = 0;
    for(int i=1;i<=n;i++){
        if(i%3==0 &&  i%5!=0){
            words[i-1] = (char *)malloc(4*sizeof(char));
            sprintf(words[i-1], "Fizz");
        }
        if(i%3!=0 &&  i%5==0){
            words[i-1] = (char *)malloc(4*sizeof(char));
            sprintf(words[i-1], "Buzz");
        }
        if(i%3==0 &&  i%5==0){
            words[i-1] = (char *)malloc(8*sizeof(char));
            sprintf(words[i-1], "FizzBuzz");
        }
        if(i%3!=0 &&  i%5!=0){
            words[i-1] = (char *)malloc( length(i) *sizeof(char));
            sprintf(words[i-1], "%d",i);
        }
        (*returnSize) ++;
    }
    return words;
}
int main(){
    int *returnSize = (int *)malloc(sizeof(int));
    *returnSize = 0;
    int num = 15;
    
    char ** words = fizzBuzz(num,returnSize);
    for(int i=1;i<= *returnSize;i++){

        printf("%s ",words[i-1]);
    }

    return 0;
}