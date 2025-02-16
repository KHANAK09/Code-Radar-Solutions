#include<stdio.h>
void main(){
    int a,b;
    scanf("%d",&a,&b);
    if((a%5==0 && b%11==0) || (a%11==0 && b%5==0))
    {
        printf("Divisible\n");
    }
    else{
        printf("Not Divisible\n");
    }
}