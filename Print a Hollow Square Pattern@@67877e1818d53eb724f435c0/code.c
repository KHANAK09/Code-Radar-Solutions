#include<stdio.h>
void main(){
    int N,i,j;
    printf("");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=2*N-i;j++){
            printf("*");
        }
        printf("\n");
    }
}