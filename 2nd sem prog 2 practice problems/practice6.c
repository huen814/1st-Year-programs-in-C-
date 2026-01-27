#include<stdio.h>

int main(){

    int i,r;
    int arr[100];

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d",&r);

    for(i = 0; i < r; i++){
        printf("Element - %d : ",i);
        scanf("%d",&arr[i]);
    }

    printf("The Even elements are :\n");
    for(i = 0; i < r; i++){
        if(arr[i] % 2 == 0){
            printf("%d ",arr[i]);
        }
    }

    printf("\n");

    printf("The Odd elements are :\n");
    for(i = 0; i < r; i++){
        if(arr[i] % 2 != 0){
            printf("%d ",arr[i]);
        }
    }

    return 0;
}