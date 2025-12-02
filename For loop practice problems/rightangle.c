#include<stdio.h>

int main(){

    int rows, i, j;

    printf("Enter how many rows: ");
    scanf("%d",&rows);

    for(i = 0; i <= rows; i++){
        for(j = 1; j <= i; j++){
            printf("%d",j);
        }
    printf("\n");
    }
    
    return 0;
}