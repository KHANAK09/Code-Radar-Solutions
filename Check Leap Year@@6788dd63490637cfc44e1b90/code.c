#include<stdio.h>
void main(){
    int year;
    scanf("%d".&year);
    if((year%400==00)||(year %4==0 && year %100 !=0)){
        printf("Leap Year\n");
    }
    else{
        printf("Not a Leap Year\n");
    }
}