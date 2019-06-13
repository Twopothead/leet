#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int firstUniqChar(char * s){
    int len = strlen(s);
    int H_SIZE = strlen(s);
    char *htable = (char*)malloc(H_SIZE*sizeof(char));
    char *key = htable; 
    for(int i=0;i<len;i++){
        htable[key++]=s[i];
    }
    return 0;
}
int main(){
    char *s1 = (char *)"leetcode";
    printf("%d ",firstUniqChar(s1));
    char *s2 = (char *)"loveleetcode";
    printf("%d ",firstUniqChar(s2));
    return 0;
}