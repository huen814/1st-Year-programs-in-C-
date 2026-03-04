#include<stdio.h>

void array_sum(int *num);

void array_sum(int *size){
    
    int sum = 0;
    
    printf("Enter the size of the array: ");
    scanf("%d", size);
    
    int array[*size];
    
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < *size; i++){
    scanf("%d",&array[i]);
    }
    
    for(int i = 0; i < *size; i++){
        sum += array[i];
    }
    
    printf("The sum of the elements is %d",sum);
    
}

int main(){
    
    int s = 0;
    
    array_sum(&s);
    return 0;
}
