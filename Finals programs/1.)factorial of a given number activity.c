#include<stdio.h>

int factorial(int n){
    int fact = 1, i;
    
    for(i = 1; i <= n; i++){
        fact *= i;
    }
    
    return fact;
}
int main(){
    int n;
    
    printf("Enter number: ");
    scanf("%d",&n);
    
    int fact = factorial(n);
    
    printf("%d! = %d",n,fact);
    return 0;
}