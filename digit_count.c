#include <stdio.h>

void digit_count(int *n);

void digit_count(int *n){
    
    int count = 0;
    
    while(*n != 0){
        *n /= 10;
        count++;
    }
    
    printf("Number of digits: %d",count);
    
}
int main(){
    
    int number = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&number);
    
    digit_count(&number);
    
    return 0;
}
