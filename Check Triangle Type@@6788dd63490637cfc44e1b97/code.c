#include<stdio.h>
void main(){
    int a,b,c;
    sacnf("%d%d%d",&a,&b,&c);
    if(a=b=c){
        printf("Equilateral\n");
    }
    else if(a!=b!=c){
        printf("Scalene\n");
    }
    else{
        printf("Isosceles\n");
    }
}