#include<stdio.h>

int odd;
int even;

void odd_or_even(int *number);

void odd_or_even(int *number){
    
    
    if(*number % 2 != 0){
        odd = 1;
        even = 0;
    }
    

    if(*number % 2 == 0){
        even = 1;
        odd = 0;
    }
    
}
int main(){
    
    int n = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    odd_or_even(&n);
    
    if(odd){
        if(n % 3 == 0){
            printf("Oddly divisible by 3");
    }
        else
            printf("Odd number");
    }
    
    if(even){
        if(n % 4 == 0){
            printf("Evenly divisible by 4");
    }
        else
            printf("Even number");
    }
    
    return 0;
}
