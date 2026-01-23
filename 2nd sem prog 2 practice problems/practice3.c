#include<stdio.h>

int main(){


    int i,j,sum = 0;
    int n[100];

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d",&i);

    printf("Input %d elements in the array: ",i);
    for(j = 0; j < i; j++){
        printf("Element - %d : ",j);
        scanf("%d",&n[j]);
    }

    for(j = 0;j < i; j++){
        
        sum += n[j];
    }

    printf("Sum of all elements stored in the array is: %d\n",sum);

    
    return 0;
}
