#include<stdio.h>
void main(){
    int cost_price,selling_price;
    scanf("%d%d",&cost_price,&selling_price);
    if(cost_price>selling_price){
        printf("Loss\n");
    }
    else if(cost_price < selling_price){
        printf("Profit\n");
    }
    else{
        printf("No Loss\n");
    }
}