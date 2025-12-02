#include<stdio.h>

int main(){

    int number,i;

    printf("Input number to be calculated: ");
    scanf("%d",&number);
    
    for(i = 1; i <= 10; i++){
        printf("\n%d * %d = %d",number,i,number * i);
    }

    return 0;
}