#include<stdio.h>
void main(){
    int num;
    scanf("%d".&num);
    if( num%4==0){
        printf("Leap Year\n");
    }
    else{
        printf("Not a Leap Year\n");
    }
}