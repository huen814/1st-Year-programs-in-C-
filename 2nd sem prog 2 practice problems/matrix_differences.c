#include<stdio.h>

void matrix_differences(int *r, int *c);

void matrix_differences(int *r, int *c){
    
    int count = 0;
    
    printf("Enter the number of rows: ");
    scanf(" %d", r);
    printf("Enter the number of columns: ");
    scanf(" %d", c);
    
    int arr1[*r][*c];
    int arr2[*r][*c];
    
    printf("Enter the elements of the first array:\n");
    for(int i = 0; i < *r; i++){
        for(int j = 0; j < *c; j++){
            printf("Element at [%d][%d]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
        
    printf("Enter the elements of the second array:\n");
    for(int i = 0; i < *r; i++){
        for(int j = 0; j < *c; j++){
            printf("Element at [%d][%d]: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    
    for(int i = 0; i < *r; i++){
        for(int j = 0; j < *c; j++){
            if(arr1[i][j] != arr2[i][j]){
                count++;
            }
        }
    }
    
    printf("Number of differences between the two matrices: %d",count);
    
}

int main(){
 
    int row = 0;
    int column = 0;
    
    matrix_differences(&row,&column);
    
    return 0;
}
