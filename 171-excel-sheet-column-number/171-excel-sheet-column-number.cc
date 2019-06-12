
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int titleToNumber(char * s){
    int v=0,tmp=0;
    for(int i=0;i<strlen(s);i++){
        tmp = s[i]-'A'+1;
        v+=tmp;
        if(i!=strlen(s)-1)
            v*=26;
    }
    return v;
}

int main(){
    //char *s = (char *)"A";
    // char *s = (char *)"AB";
    char *s = (char *)"ZY";
    printf("%d",titleToNumber(s));
    return 0;
}