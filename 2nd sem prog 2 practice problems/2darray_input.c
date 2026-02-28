#include<stdio.h>

void array_input(int *r, int *c);

void array_input(int *r, int *c){
    
    printf("Enter the number of rows: ");
    scanf("%d", r);
    printf("Enter the number of columns: ");
    scanf("%d", c);
    
    int array[*r][*c];
    
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < *r; i++){
        for(int j = 0; j < *c; j++){
            printf("Element at [%d][%d]: ",i,j);
            scanf(" %d",&array[i][j]);
        }
    }
    
    printf("Elements of the array:\n");
    for(int i = 0; i < *r; i++){
        for(int j = 0; j < *c; j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    
}
int main(){
    
    int row = 0;
    int column = 0;
    
    array_input(&row,&column);
    
    return 0;
}
