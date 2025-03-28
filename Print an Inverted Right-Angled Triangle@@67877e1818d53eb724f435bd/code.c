#include<stdio.h>
int main(){
    int N,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            if(j>=N-(i-1) && j<=N+(i-1))
            printf("*");
        }
        else {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}