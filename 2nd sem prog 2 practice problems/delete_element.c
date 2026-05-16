#include<stdio.h>

void deleteElement(int *array,int *size,int *del){
    
    int found = 0;
    
    for(int i = 0; i < *size; i++){
        if(array[i] == *del){
            found = 1;
        for(int j = i; j < *size - 1; j++){
            array[j] = array[j + 1];
        }
        (*size)--;
    }
}
    
    if(found){
        printf("The updated array is: ");
        for(int i = 0; i < *size;i++){
            printf("%d ",array[i]);
        }
    }
    else if(!found){
        printf("Value not found in the array.");
    }
    
}

int main(){
    
    int size = 0;
    int elements = 0;
    int value = 0;

    printf("Enter the size of the array: ");
    scanf(" %d",&size);
    
    int array[size];
    
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < size; i++){
    scanf(" %d",&array[i]);    
    }
    
    printf("Enter the value of the element to be deleted: ");
    scanf(" %d",&value);
    
    deleteElement(array,&size,&value);
    
    return 0;
}
