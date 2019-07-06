#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char findTheDifference(char * s, char * t){
    int alpha[26];
    for(int i=0;i<26;i++)
        alpha[i] = 0;
    for(int i=0;i<strlen(s);i++){
            alpha[(s[i] - 'a')]++;
    }
    for(int i=0;i<strlen(t);i++){
            alpha[(t[i] - 'a')]--;
    }
    for(int i=0;i<26;i++)
        if(alpha[i] != 0)
            return (char)(i+'a');
    return 'a';
}
int main(){
    char *s,*t;
    s = "abcd",t = "abcde";
    printf("%c ",findTheDifference(s,t));
    return 0;
}