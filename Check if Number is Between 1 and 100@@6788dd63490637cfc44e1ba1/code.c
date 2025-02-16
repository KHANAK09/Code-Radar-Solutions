#include<stdio.h>
void main(){
    int num;
    scanf("%d",&num);
    if(num >=1 && num <=100){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
}