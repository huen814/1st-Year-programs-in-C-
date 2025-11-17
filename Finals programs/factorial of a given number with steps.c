#include<stdio.h>

int factorial(int n){
    int fact = 1,i;
    
    for(i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n < 0){
        printf("Error: Factorial of a negative number doesn't exist.");
    }
    else if(n == 0){
        printf("Factorial of 0 is 1");
        printf("\n0! = 1");
    }
    else{
    int fact = factorial(n);
    
        printf("Factorial of %d is %d\n",n,fact);
        
        printf("%d! = ",n);
    for(int i = 1; i <= n; i++){
        printf("%d",i);
        if(i < n){
            printf(" * ");
        }
    }
}
    return 0;
}
