#include<stdio.h>
void main(){
    int a,b,c;
    sacnf("%d%d5d",&a,&b,&c);
    if(a=b=c){
        printf("Equilateral\n");
    }
    else if((a=b!=c) || (a!=b=c) || (a=c!=b) ){
        printf("Isosceles\n");
    }
    else{
        printf("Scalene\n");
    }
}