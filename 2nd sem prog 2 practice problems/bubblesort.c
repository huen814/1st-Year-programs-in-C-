#include<stdio.h>

int main(){

    int arr[10];

    int size = sizeof(arr) / sizeof(arr[10]);


    printf("Enter 10 numbers to be sorted:\n");
    for(int i = 0; i < size; i++){
        printf("Number %d: ",i);
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < size; i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}
