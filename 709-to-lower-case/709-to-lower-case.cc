#include <stdio.h>
#include <string.h>
char * toLowerCase(char * str){
    char *p = str;
    for (int i = 0; i < strlen(str); i++)
    {
        p[i] = (p[i]<=90&&p[i]>=65)?(p[i]+32):p[i];
    }
    return str;
}
int main(){
    printf("%d %d %d",'A','Z','a');
}

