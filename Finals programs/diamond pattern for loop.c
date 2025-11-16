#include<stdio.h>

int main(){
    // I dont know what im doing anymore.
    int rows,i,j;
    
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    
    for(i=0; i <= rows; i++){
        for(j=i; j < rows; j++){
            printf(" ");
        }
    for(j = 1; j <= (2 * i - 1); j++){
        printf("*");
    }
        printf("\n");
    }
    
    for(i=rows - 1; i>= 1; i--){
        for(j = rows; j > i; j--){
            printf(" ");
        }
    for(j =1; j <= 2 * i - 1; j++){
        printf("*");
    }
    printf("\n");
    }
    return 0;
}
