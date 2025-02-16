#include<stdio.h>
void main(){
    int num;
    scanf("%d",&num);
    if (num & (1<<31))
    {
        printf("Set\n");
    }
    else{
        printf("Not Set\n");
    }
}