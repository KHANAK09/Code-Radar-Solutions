#include<stdio.h>
void main(){
    int num;
    scanf("%d",&num);
    if(num >1 && num%1==0 && num%num==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}