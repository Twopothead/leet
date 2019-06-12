
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
char * multiply(char * num1, char * num2){

    char *s;
    int len = strlen(num1)+strlen(num2);
    s = (char *)malloc(len+2);
    for(int i=0;i<len;i++){
        s[i] = '0';
    }
    for(int i=len;i>=0;i--){
        s[i] = 
    }
    return s;
}

int main(){
    char * num1 = (char *)"123";
    char * num2 = (char *)"456";
    printf("%s",multiply(num1,num2));
    return 0;
}