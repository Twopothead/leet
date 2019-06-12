#include <stdio.h>
#include <stdlib.h>
bool canWinNim(int n){
    if(n%4)
        return false;
  return true;
}
int main(){
    printf("%d ",canWinNim(4));
    printf("%d ",canWinNim(5));
    return 0;
}