#include <stdio.h>
#include <stdlib.h>
int maxProfit(int* prices, int pricesSize){
    int max = 0;
    for(int i=0;i<pricesSize;i++){
        if(i==pricesSize-1)
            break;
        for(int j=i+1;j<pricesSize;j++){
            if(prices[j] - prices[i]>= max)
                max = prices[j] - prices[i];   
        }
    }
    return max;
}
int main(){
    //int prices[6] = {7,1,5,3,6,4};
    //printf("%d",maxProfit(prices,6));
    // int prices[5] = {1,2,3,4,5};
    // printf("%d",maxProfit(prices,5));
    int prices[5] = {7,6,4,3,1};
    printf("%d",maxProfit(prices,5));
    return 0;
}