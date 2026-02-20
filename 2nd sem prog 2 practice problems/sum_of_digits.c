#include<stdio.h>

void sum_of_digits(int *num);

void sum_of_digits(int *num){
    
    int sum = 0;
    int last = 0;
    
    while(*num != 0){
    last = *num % 10;
    sum += last;
    *num /= 10;
    }
    
    printf("Sum of digits: %d",sum);
    
}
int main(){
    
    int n = 0;
    
    printf("Enter an integer: ");
    scanf("%d",&n);
    
    sum_of_digits(&n);
    
    return 0;
}
