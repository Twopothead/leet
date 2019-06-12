#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * longestCommonPrefix(char ** strs, int strsSize){
    if(!strsSize)
        return "";
    int flag = 0,len = 0; 
    for(int i=0;i<strlen(strs[0]);i++){
        for(int j=0;j<strsSize;j++){
            if( i > strlen(strs[j]) )
                break;
            if(strs[j][i]!=strs[0][i]){
                flag = 1;
                break;
            }
            // printf("%c",strs[j][i]);
        }
        if(flag==1)
            break;
        len ++;
        // printf("\n");
    }
    if(len == 0) return "";// return "" 
    char *prefix = (char *)malloc((len+1)*sizeof(char));
    for(int i=0;i<len;i++)
        prefix[i] = strs[0][i];
    prefix[len] = '\0';
    return prefix;
}
int main(){
    char *words[] = {"flower","flow","flight"};
    //char *words[] = {"dog","racecar","car"};
    int strsSize=3;
    printf("%s",longestCommonPrefix(words,strsSize));
    return 0;
}
