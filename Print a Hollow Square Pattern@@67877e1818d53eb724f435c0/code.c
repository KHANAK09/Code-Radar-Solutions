#include<stdio.h>
void main(){
    int N,i,j;
    printf("");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=i;j<=N;j++){
            printf("*");
        }
        printf("\n");
    }
}