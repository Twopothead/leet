#include <stdlib.h>
#include <string.h>
#include <stdio.h>
char * addBinary(char * a, char * b){
    int tmp,av,bv,l1 = strlen(a),l2 = strlen(b);
    int size = (l1>l2)?l1:l2;
    char *c = malloc(size+2);
    int flag = 0;
    c[0]= '0';c[size-1] = 0;
    for(int i=size-1;i>=0;i--){
        if(l1>0){
            av = a[l1-1]-'0';
            l1--;
        }else{ av = 0; }
        if(l2>0){
            bv = b[l2-1]-'0';
            l2--;
        }else{bv = 0;}
        tmp = av+bv;
        if(flag)
            tmp++;
        flag = (tmp == 2 ) ? 1:0;
        c[i+1] = flag ? '0':'1';
    }
    // c[0] = flag ? '1':'0';
    // if(c[0]=='0'){
    //    for(int i=0;i<size-1;i++){
    //        c[i] = c[i+1];
    //    }
    //    c =  realloc(c,size-1);
    // }
    // c[0] = '1',c[1]='0',c[2]='0',c[3]='\0';
    c[3]='\0';
    c[0] = '0',c[1]='\0';
    return c;
}
// char * addBinary(char * a, char * b){
//     int tmp,av,bv,len_a = strlen(a),len_b = strlen(b);
//     int maxlen = (len_a>=len_b)?len_a:len_b;
//     char *c = malloc(maxlen+1);
//     int flag = 0;
//     c[0]= '#';
//     for(int i=maxlen-1;i>=0;i--){
//         if(len_a>0){
//             av = a[len_a-1]-'0';
//             len_a--;
//         }else{ av = 0; }
//         if(len_b>0){
//             bv = b[len_b-1]-'0';
//             len_b--;
//         }else{bv = 0;}
//         tmp = av+bv;
//         if(flag)
//             tmp++;
//         flag = (tmp == 2 ) ? 1:0;
//         c[i+1] = flag ? '0':tmp+'0';
//     }
//     c[0] = flag ? '1':'0';
//     if(c[0]=='0'){
//         c++;
//     }

//     return c;
// }
        // av = (len_a>0)? a[len_a-1]-'0':0; 
        // bv = (len_b>0)? b[len_b-1]-'0':0;
        // if(len_a>0) len_a--;
        // if(len_b>0) len_b--;
int main(){
    // char a[10]="1010",b[10]="1011";
    //  char a[10]="11",b[10]="1";
     char a[10]="0",b[10]="0";
    //  char *a="11",*b = "1";
    // printf("%d",strlen(a));
    printf("%s",addBinary(a,b));
    return 0;
}