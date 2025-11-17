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
    
    int fact = factorial(n);
    
    printf("Factorial of %d is %d\n",n,fact);
    
    printf("%d! = ",n);
    for(int i = 1; i <= n; i++){
        printf("%d",i);
    if(i < n){
        printf(" * ");
    }
}

    return 0;
}
