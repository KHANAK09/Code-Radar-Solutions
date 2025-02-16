#include<stdio.h>
void main(){
    int num1,num2;
    char operator;
    scanf("%d%d%c",&num1,&num2,&operator);
    switch(operator){
        case '+':
        printf("%d\n",num1+num2);
        break;
        case'-':
        printf("%d\n",num1-num2);
        break;
        case'*':
        printf("%d\n",num1*num2);
        break;
        case'/':
        printf("%d\n",num2 ==0);
    }
    
}