#include<stdio.h>
void main(){
    int Year;
    scanf("%d"&Year);
    if((Year%400==00)||(Year %4==0 && Year %100 !=0)){
        printf("Leap Year\n");
    }
    else{
        printf("Not a Leap Year\n");
    }
}