#include<stdio.h>
// PYRAMID USING USER DEFINED VOID FUNCTION 
// STILL LEARNING HOW TO DO FOR LOOPS
void triangle(int row);

int main(){
    
    int row;
    
        printf("Enter number of rows: ");
        scanf("%d",&row);
    
        triangle(row);
    
    return 0;
}
void triangle(int row){
    
    int i,j;
    
    for(i=1; i <= row; i++){
        for(j= i; j < row; j++) {
            printf(" ");
        }
        for(j = 1; j <= (2* i - 1);j++){
            printf("*");
        }
        printf("\n");
    }
}
