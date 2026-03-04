#include<stdio.h>

void largest_element(int *size);

void largest_element(int *size){
    
    printf("Enter the size of the array: ");
    scanf("%d", size);
    
    int array[*size];
    
    printf("Enter the elements of the array:\n");
    
    for(int i = 0; i < *size; i++){
        printf("Element %d: ",i);
        scanf("%d", &array[i]);
    }
    
    int largest = array[0];
    
    printf("The largest element in the array is: ");
    
    for(int i = 0; i < *size; i++){
        if(array[i] > largest){
            largest = array[i];
        }
    }
    
    printf("%d",largest);
    
}

int main(){
    
    int element = 0;
    
    largest_element(&element);
    
    return 0;
}
