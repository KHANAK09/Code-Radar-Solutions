#include<stdio.h>
void main(){
    int N,i,j;
    printf("");
    scanf("%d",&N);
    for(i=N;i>=1;i++){
        for(j=1;j<=N;j++){
            if((i+j)<=N){
                printf("");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    
}