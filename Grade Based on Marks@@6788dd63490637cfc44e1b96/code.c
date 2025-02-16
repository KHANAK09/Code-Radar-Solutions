#include<stdio.h>
void main(){
    int num;
    scanf("%d",&num);
    if(num >=90){
        primtf("A\n");
    }
    else if( num >= 80){
        printf("B\n");
    }
    else if( num >= 70){
        printf("C\n");
    }
    else if( num >= 60)
    {
        printf("D\n");
    }
    else{
        printf("F\n");
    }
}