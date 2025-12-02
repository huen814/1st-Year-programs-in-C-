#include<stdio.h>

int main(){

    int num,i;
    int sum = 0;

    printf("Enter numbers: ");
    for(num = 1; num <= 10; num++){
        printf("Number %d: ",num);
        scanf("%d",&i);

        sum += i;
    }
    printf("Sum of entered numbers is: %d",sum);

    int average = sum / 10.00;

    printf("\nAverage is %d",average);


return 0;
}