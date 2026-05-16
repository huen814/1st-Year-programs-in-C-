#include<stdio.h>

void findMax(int *arr,int size){
        
    int max = arr[0];
    
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    
    printf("The maximum value in the array is %d",max);
    
}

void getinput(int *array,int *s){
    
    printf("Enter the size of the array: ");
    scanf("%d", s);
    printf("Enter the elements of the array:\n");
    
    for(int i = 0; i < *s; i++){
    scanf("%d", &array[i]);
    }

}

int main(){
    
    int tsize = 0;
    int array[100];
        
    getinput(array,&tsize);
    findMax(array,tsize);
    
    return 0;
}
