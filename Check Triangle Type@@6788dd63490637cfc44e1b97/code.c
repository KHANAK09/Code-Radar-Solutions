#include<stdio.h>
void main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c){
        printf("Equilateral\n");
    }
    else if(a!=b!=c){
        printf("Scalene\n");
    }
    else{
        printf("Isosceles\n");
    }
}