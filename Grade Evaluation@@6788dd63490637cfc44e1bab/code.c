#include<stdio.h>
int mian(){
    char grade;
    if(scanf("%c",&grade) !=1){
        printf("Invalid grade\n");
        return 1;
    }
    switch(grade){
        case 'A':
        printf("Excellent\n");
        break;
        case 'B':
        printf("Good\n");
        break;
        case 'C':
        printf("Average\n");
        break;
        case 'D':
        printf("Below Average");
        break;
        case 'F':
        printf("Fail\n");
        break;
        default:
        printf("Invalid grade\n");
    }
    return 0;
}