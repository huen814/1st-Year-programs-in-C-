#include<stdio.h>

int main(){
    
    int num;
    
        printf("Enter a 3 or 4 digit number: ");
        scanf("%d",&num);
        
        if(num < 100 || num > 999){
            printf("Please enter a valid number.");
        }
        else{
        int num1 = num % 10;
        int num2 = (num / 10) % 10;
        int num3 = num / 100;
        
            int sum_of_nums = num1 + num2 + num3;
        
            if(sum_of_nums % 2 == 0){
                printf("The sum of the digits is even.");
            }
            else{
                printf("The sum of the digits is odd.");
            }
        }
    return 0;
}
