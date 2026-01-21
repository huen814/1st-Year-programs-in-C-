#include<stdio.h>

int main(){

    int arr[10];
    int n;

    printf("Input 10 elements in the array: ");

    for(n = 0; n < 10; n++){
    printf("Element - %d : ",n);
    scanf("%d",&arr[n]);
    }

    printf("Elements in array are: ");
    for(n = 0; n < 10; n++){
        printf(" %d", arr[n]);
    }

    return 0;
}