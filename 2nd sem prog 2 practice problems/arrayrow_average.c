#include<stdio.h>

void arrayrow_average(int *r,int *c);

void arrayrow_average(int *r,int *c){
    
    float average = 0;
    int sum = 0;
    
    printf("Enter the number of rows: ");
    scanf("%d", r);
    printf("Enter the number of columns: ");
    scanf("%d", c);
    
    int arr[*r][*c];
    
    for(int i = 0; i < *r; i++){
        for(int j = 0; j < *c; j++){
            printf("Element at [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("Averages of each row:\n");
    
    for(int i = 0; i < *r; i++){
        average = 0;
        sum = 0;
        for(int j = 0; j < *c; j++){
            sum += arr[i][j];
        }
            average += (float)sum / *c;
            printf("Row %d: %.2lf\n",i + 1,average);
    }
    
}
int main(){
    
    int row = 0;
    int column = 0;
    
    arrayrow_average(&row,&column);
    
    return 0;
}
