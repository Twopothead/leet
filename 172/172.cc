#include <stdio.h>
#include <stdlib.h>

// int five(int n){
//     int t = 0;
//     if(n==0)
//         return 0;
//     while (n%5==0)
//     {
//         n/=5;
//         t+=1;
//     }
//     return t;
// }
// int trailingZeroes(int n){
//     int f = 0;
//     for(int i=1;i<=n;i++){
//         f+=five(i);
//     }
//     return f;
// }
    // if(n==1808548329)
    //     return 452137076;
int five(int n){
    int index = n/5;
    if(index%5==0)
        return  index/5+index;
    else{
        // int base = 5*(index-index%5);
        // // return five(base)+index%5;
        // return five(base)+index%5;

    }
    return 0;
}
int trailingZeroes(int n){
    // n -= (n%5); 
    return five(n);
}
//５: 1 
//10: 2
//15: 3
//20: 4
//25: 6
//30: 7
//55:13
//125:31
// 11 
int main(){
       // printf("%d ",trailingZeroes(3));
    printf("%d ",trailingZeroes(200));

        // printf("%d \n",trailingZeroes(1808548329));
        // printf("%d ",trailingZeroes(2147483647));
for(int i=1;i<225;i++){
    if(i%5==0)
printf("%d ",trailingZeroes(i));
// 0 1 2 3 4 6 7 8 9 10 12 13 14 15 16 18 19 20 21 22 24 25 26 27 2
}
// for(int i=0;i<325;i+=5){
// printf("%d ",trailingZeroes(i));

// 5 6
// 10 12
// 15 18
//  5 10 15
// 1 2 3 4          5
// 6  7   8  9 10   11
// 12 13 14 15 16   17
// 18 19 20 21 22   23
// 24 25 26 27 28   29  30
// 31 32 33 34 35   36
// 37 38 39 40 41 
// 43 44 45 46 47 
// 49 50 51 52 53 
// 55 56 57 58 59 
// 62
// }
// for(int i=0;i<325;i+=5){
// printf("%d ",trailingZeroes(i));
// }
    // printf("%d ",trailingZeroes(5));
//    printf("%d ",five(0));

    return 0;
}
