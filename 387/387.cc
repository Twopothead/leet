#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Time Limit Exceeded
int firstUniqChar(char * s){
    bool flag  = false;
    bool first = true;
    int pos = -1;
    for(int i=0;i<strlen(s);i++){
        flag = false;
        for(int j=0;j<strlen(s);j++){
           if( (i!=j) &&s[j]==s[i])
                flag = true; 
        }
        if(flag==false && first == true ){
            pos = i;
            first = false;
        }
    }
    return pos;
}
int main(){
    char *s1 = (char *)"leetcode";
    printf("%d ",firstUniqChar(s1));
    char *s2 = (char *)"loveleetcode";
    printf("%d ",firstUniqChar(s2));
    char *s3 = (char *)"cc";//-1
    printf("%d ",firstUniqChar(s3));
    return 0;
}