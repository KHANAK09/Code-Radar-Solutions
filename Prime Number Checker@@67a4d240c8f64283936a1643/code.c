#include<stdio.h>
int isPrime(int num,int i){
if(num <=1)
    return 0;
    if( i ==1)
    return 1;
    if(num %i == 0)
    return 0;
    return isPrime(num,i-1);
}
int main(){
    int number;
    printf("Enter a positive integer:");
    scanf("%d",&number);
    if(isPrime(number,number/2)){
        printf("%d is a prime number.\n",number);
    }
    else{
        printf("%d is not a prime number.\n",number);
    }
    return 0;
}