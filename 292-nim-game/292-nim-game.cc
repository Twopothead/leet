#include <stdio.h>
#include <stdlib.h>
bool canWinNim(int n){
    return (n%4!=0);
}
int main(){
    printf("%d ",canWinNim(4));
    printf("%d ",canWinNim(5));
    return 0;
}