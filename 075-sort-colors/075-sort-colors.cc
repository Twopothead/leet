
#include <stdio.h>
void sortColors(int* nums, int numsSize){   
    int zero=0,one=0,two=0;
    for(int i;i<numsSize;i++){
        if(nums[i]==0)
            zero++;
        else if(nums[i]==1){
            one++;
        }        
        else if(nums[i]==2){
            two++;
        }
    }
    for(int i;i<numsSize;i++){
        if(zero){
            nums[i] = 0;
            zero--;
            continue;
        }
        if(!zero&&one){
            nums[i] = 1;
            one--;
            continue;
        }
        if(!zero&&!one&&two){
            nums[i] = 2;
            two--;
            continue;
        }
    }
}
int main(){
    return 0;
}