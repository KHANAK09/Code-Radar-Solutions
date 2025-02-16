#include<stdio.h>
void main(){
    int cost price,selling price;
    scanf("%d%d",&cost price,&selling price);
    if(cost price>selling price){
        printf("Loss\n");
    }
    else if(cost price < selling price){
        printf("Profit\n");
    }
    else{
        printf("No Loss\n");
    }
}