#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lengthOfLastWord(char * s){
    if(strlen(s)==0)
        return 0;
    int count = 0;
    char *p = s;
    int before = 0;
    int flag = false; 
    for(int i=0;i<strlen(s);i++){
        count++;
        if(s[i]==' '){
            if(!flag)
                before = count-1;
            flag = true;
            count = 0;
        }else{
            flag = false;
        }
    }
    if(s[strlen(s)-1]==' ')
        return before;
    return count;
}
int main(){
    //char *s = "Hello World";
    //char *s = "a ";

    //char *s = "World";
    //char *s = "";
    //char *s = "b   a    ";
    printf("%d ",lengthOfLastWord(s));
    return 0;
}