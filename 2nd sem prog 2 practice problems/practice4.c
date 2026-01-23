#include<stdio.h>

int main(){

    int a[100];
    int b[100];
    int i;
    int n;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d",&i);

    printf("Input %d elements in the array:\n",i);
    for(n = 0; n < i; n++){
        printf("element - %d: ",n);
        scanf("%d",&a[n]);
    }

    for(n = 0; n < i; n++){
    b[n] = a[n];
    }

    printf("The elements stored in the first array are: ");
    for(n = 0; n < i; n++){
        printf("%d ",a[n]);
    }

    printf("\nThe elements copied into the second are: ");
    for(n = 0; n < i; n++){
        printf("%d ",b[n]);
    }
    return 0;
}
