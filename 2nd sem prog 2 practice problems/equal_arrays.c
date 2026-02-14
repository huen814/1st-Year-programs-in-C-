#include<stdio.h>


void equalNumbers(int *n1,int *n2,int *n3);
int main(){
    
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    
    equalNumbers(&num1,&num2,&num3);
    
      if(num1 == num2 && num1 == num3){
        printf("All numbers are equal.");
    }
    else{
        printf("Not all numbers are equal.");
    }
    
    return 0;
}
void equalNumbers(int *n1,int *n2,int *n3){
    
    printf("Enter first number: ");
    scanf("%d", n1);
    printf("Enter second number: ");
    scanf("%d", n2);
    printf("Enter third number: ");
    scanf("%d", n3);
    
}
