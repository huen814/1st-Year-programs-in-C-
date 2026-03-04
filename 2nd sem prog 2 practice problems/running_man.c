#include<stdio.h>

void running_man(int *size);

void running_man(int *size){
    
    int sum;
    
    printf("Enter the size of the array: ");
    scanf("%d", size);
    
    int array[*size];
    
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < *size; i++){
        printf("Element %d: ",i);
        scanf(" %d", &array[i]);
    }
    
    
    printf("Sum of each addition of the elements:\n");
    for(int i = 0; i < *size; i++){
        sum += array[i];
        printf("%d ",sum);
    }
    
}

int main(){
    
    int n = 0;
    
    running_man(&n);
    
    return 0;
}
