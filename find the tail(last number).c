#include<stdio.h>

// remember this modulo
int main(){
    int number;
    int lastNumber;
        
        printf("Enter the number: ");
        scanf("%d",&number);
        
        lastNumber = number % 10;
        
        printf("Tail = %d",lastNumber);
    return 0;
}
