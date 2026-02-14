#include<stdio.h>

void divisibleBy(int *num);

int main(){
    
    int divisible_num = 0;
    
    divisibleBy(&divisible_num);
    
    if(divisible_num % 4 == 0){
        printf("The number is divisible by 4.");
    }
    else if(divisible_num % 4 != 0 && divisible_num % 3 == 0){
        printf("The number is divisible by 3.");
    }
    else if(divisible_num % 4 != 0 && divisible_num % 3 != 0 && divisible_num % 2 == 0){
        printf("The number is divisible by 2.");
    }
    else if(divisible_num % 4 != 0 && divisible_num % 3 != 0 && divisible_num % 2 != 0){
        printf("The number is not divisible by 2, 3, or 4.");
    }
    
    return 0;
    
}
void divisibleBy(int *num){
    
    printf("Enter an integer: ");
    scanf("%d", num);
    
    
}
