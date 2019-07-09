
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool islowcase(char a){
    return a >='a';
}
bool detectCapitalUse(char * word){
    if(islowcase(word[0])){
        for(int i=0;i<strlen(word);i++){
            if(!islowcase(word[i])){
                return false;
            }
        }
    }else{
        if(strlen(word)<2){
            return true;
        }
        if(islowcase(word[1])){
            for(int i=1;i<strlen(word);i++){
                if(!islowcase(word[i])){
                    return false;
                }
            }
        }else
        {
            for(int i=1;i<strlen(word);i++){
                if(islowcase(word[i])){
                    return false;
                }
            }
            return true;
        }
    }
    return true;
}
int main(){
   //char * word = (char *)"USA";
    //char * word = (char *)"FlaG";
     char * word = (char *)"Leetcode";
    printf(" %d", detectCapitalUse(word));

    return 0;
}