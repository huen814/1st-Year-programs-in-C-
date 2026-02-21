#include<stdio.h>

void fizzbuzz(int *num);

void fizzbuzz(int *num){
    
    do{
    printf("Enter a number: ");
    scanf("%d", num);
    if(*num % 3 == 0 && *num % 5 == 0){
        printf("FizzBuzz\n");
    } else if (*num % 5 == 0){
        printf("Buzz\n");
    } else if(*num % 3 == 0){
        printf("Fizz\n");
    } else  {
        printf("%d\n",*num);    
    }
    }while(*num != 0);
    
}

int main(){
    
    int n = 0;
    
    fizzbuzz(&n);
    
    return 0;
}
