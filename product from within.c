#include<stdio.h>
//gets the product of a 2 digit integer
int main(){
    int num,digit1,digit2,product;
        
        printf("Enter the 2 digit integer: ");
            scanf("%d",&num);
            
            digit1 = num / 10;
            digit2 = num % 10;
            product = digit1 * digit2;
        
        printf("Product of %d and %d = %d",digit1,digit2,product);
        return 0;
}
