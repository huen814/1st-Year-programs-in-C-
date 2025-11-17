#include <stdio.h>

void displayFibonaccih(int n1,int n2, int terms);
void displayFibonacci(int n);

int main() {
    int terms,n;
    int n1 = 0; 
    int n2 = 1;
    
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
     if(terms < 0){
        printf("Error: Please enter a positive integer.");
    } 
    else if(terms == 0){
        printf("Fibonnaci Sequence:\n");
        printf("0");
    }
    else{
    printf("Fibonacci sequence:\n");
    
    displayFibonaccih(n1,n2,terms);
    displayFibonacci(n);
    }
    return 0;
}

void displayFibonaccih(int n1, int n2, int terms) {
    
    int nextTerm;
    
    if (terms >= 1){
        printf("%d ",n1);
    }
    if (terms >= 2){
        printf("%d ",n2);
    }
    for(int i = 3; i <= terms; i++){
    nextTerm = n1 + n2;
    printf("%d ", nextTerm);
    n1 = n2;
    n2 = nextTerm;
    }
}
void displayFibonacci(int n){
}
