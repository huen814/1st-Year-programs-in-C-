#include<stdio.h>

int main(){
    //SHAPE MAKER
    int size;
    char pattern;
    
    printf("||| SHAPE MAKER! |||\n");
    printf("\nLet's start with a square\n");
    printf("\nCreate a square with a custom pattern using letters\n");
    printf("\n\n");
do{
    printf("Enter size: ");
    scanf("%d",&size);
    if(size <= 0){
        printf("Enter a valid size\n");
    }
}while(size <= 0);

    printf("Enter pattern: ");
    scanf(" %c",&pattern);
    
    for(int i=0; i < size; i++){
        for(int j=0; j < size; j++){
            printf("%c ", pattern);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Next let's make a triangle\n");
    
    int rows;
    char pattern_triangle;

do{
    printf("\nEnter number of rows: ");
    scanf("%d",&rows);
    if(rows <= 0){
        printf("Enter a valid number");
    }
}while(rows <= 0);

    printf("Enter pattern: ");
    scanf(" %c",&pattern_triangle);
    for(int i = 0; i <= rows; i++){
        for(int j = i; j < rows; j++){
            printf(" ");
    }
    for(int j = 0; j < (2 * i - 1); j++){
            printf("%c",pattern_triangle);
            }
    printf("\n");
        }
    
    printf("\n\n");
    printf("Lastly, let's make a right half pyramid\n");
    
    int rows_right;
    char pattern_right;

do{    
    printf("Enter number of rows: ");
    scanf("%d",&rows_right);
    if(rows_right <= 0){
        printf("Enter a valid number\n");
    }
} while (rows_right <=0);

    printf("Enter pattern: ");
    scanf(" %c",&pattern_right);
    
    for(int i = 0; i <= rows_right;i++){
        for(int j = 0; j < i; j++){
            printf("%c",pattern_right);
        }
        printf("\n");
    }
    return 0;
}
