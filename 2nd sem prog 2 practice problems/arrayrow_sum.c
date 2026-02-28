#include<stdio.h>

void arrayrow_sum(int *r, int *c);

void arrayrow_sum(int *r, int *c){
    
    int sum = 0;
    
    printf("Enter the number of rows: ");
    scanf("%d", r);
    printf("Enter the number of columns: ");
    scanf("%d", c);
    
    int arr[*r][*c];
    
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < *r; i++){
        for(int j = 0; j < *c; j++){
            printf("Element at [%d][%d]: ",i,j);
            scanf(" %d",&arr[i][j]);
        }
    }
    
    printf("Sum of each row:\n"); 
    for(int i = 0; i < *r; i++){
        sum = 0;
        for(int j = 0; j < *c; j++){
        sum += arr[i][j];
        }
        printf("%d\n",sum);
    }
    
    
    
}

int main(){
    
    int row = 0;
    int column = 0;
    
    arrayrow_sum(&row,&column);
    
    return 0;
}
