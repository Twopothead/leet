#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// char *strrev(char *str)
// {
//       char *p1, *p2;

//       if (! str || ! *str)
//             return str;
//       for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
//       {
//             *p1 ^= *p2;
//             *p2 ^= *p1;
//             *p1 ^= *p2;
//       }
//       return str;
// }

// char * strrev(char *s){
//     char *head = s;
//     char *tail = s;
//     char ch;
//     while (*tail++) { }
//     tail--;// t++--
//     tail--;// '\0'
//     while (head<tail)
//     {
//         ch = *head;
//         *head++ = *tail;
//         *tail-- = ch;
//     }
//     return s;
// }

// char itoa(int num){return '0'+num;}

char * convertToBase7(int num){

    char *s;
    bool neg = false;
    if(num<0){
        num = -num;
        neg = true;
    }else if(num==0){
        s=(char*)malloc(2*sizeof(char));
        s[0] = '0',s[1] = '\0';
        return s;
    }
    int tmp= 0,count = 0;
    s = (char *)malloc(sizeof(char));
    *s='\0';
    while (num)
    {
        tmp = num % 7;
        s=(char*)realloc(s,(count+1)*sizeof(char));
        s[count++] = '0'+tmp;
        num/=7;
    }
    if(neg){
        s=(char*)realloc(s,(count+1)*sizeof(char));
        s[count++] = '-';
    }
    s=(char*)realloc(s,(count+1)*sizeof(char));
    s[count++] = '\0';
    char *s2 = (char *)malloc((strlen(s)+1)*sizeof(char));
    for(int i=0;i<strlen(s);i++){
        s2[i] = s[strlen(s)-i-1];
    }
    s2=(char*)realloc(s2,(count+1)*sizeof(char));
    s2[strlen(s)]='\0';
    free(s);    
    return s2;
}
int main(){
    int num1 = 100,num2 =-7;
    printf("%s",convertToBase7(num1));
    //printf("%c",itoa(8));
    // char *s = (char *)malloc(strlen("helloworld")*sizeof(char));
    // // strcpy(s,"helloworld");
    // // printf("\n%s",strrev(s));
    printf("\n%s",convertToBase7(num2));
    printf("\n%s",convertToBase7(0));

    return 0;
}