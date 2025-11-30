#include<stdio.h>

int main(){

    int num, small, digit;

    printf("Enter the integer: ");
    scanf("%d",&num);
    small = 9;
    while(num > 0){
        digit = num % 10;
        if(digit < small){
            small = digit;
        }
        num = num/10;
    }
     printf("Smallest digit = %d",small);
    
return 0;
}