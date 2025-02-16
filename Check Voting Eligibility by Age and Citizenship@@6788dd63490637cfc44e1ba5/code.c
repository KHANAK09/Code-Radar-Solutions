#include<stdio.h>
void main(){
    int age,citizen_status;
    scanf("%d%d",&age,&citizen_status);
    if( age>= 18 && citizen_status== 1 ){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
}