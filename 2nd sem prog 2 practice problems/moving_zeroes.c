#include<stdio.h>

void moving_zeroes(int *arr);

void moving_zeroes(int *size){
    
    printf("Enter the size of the array: ");
    scanf("%d", size);
    
    int arr[*size];
    
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < *size; i++){
        printf("Element %d: ",i);
        scanf(" %d",&arr[i]);
    }
    
    printf("Array with zeros moved to the end: ");
    for(int i = 0; i < *size; i++){
        if(arr[i] != 0){
            printf("%d ",arr[i]);
        }
    }
    
    for(int i = 0; i <* size; i++){
        if(arr[i] == 0){
            printf("%d ",arr[i]);
        }
    }
        
}
int main(){
    
    int zero = 0;
    
    moving_zeroes(&zero);

    return 0;
}
