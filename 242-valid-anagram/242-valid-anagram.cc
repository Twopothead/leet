#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isAnagram(char * s, char * t){
    if(strlen(s)!=strlen(t))
        return false;
    unsigned int flag = 0;
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
            return false;
    return true;
}
int main(){
    char *s,*t;
    //s = "rat", t = "car";
    s ="dgqztusjuu",t="dqugjzutsu";
    //s = "anagram", t = "nagaram";
    printf("%d ",isAnagram(s,t));
    return 0;
}