#include<stdio.h>
void main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c && c==a){
        printf("Equilateral\n");
    }
    else if(a!=b && b!=c && c!=a){
        printf("Scalene\n");
    }
    else{
        printf("Isosceles\n");
    }
}