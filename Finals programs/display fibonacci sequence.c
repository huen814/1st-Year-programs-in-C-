#include <stdio.h>

void displayFibonacciPart(int start, int count);
int fibonacciCount(int n);

int main() {
    int start, count;
    int a,b,next_term;
    
    printf("Enter the starting position: ");
    scanf("%d", &start);
    printf("Enter the number of terms to display: ");
    scanf("%d", &count);
    if(start < 0 || count < 0){
        printf("Error: Please enter valid positive values.");
    }
    else {
    printf("Fibonacci sequence starting at %dth term:\n",start);
    displayFibonacciPart(start, count);
}
    return 0;
}
int fibonacciCount(int n){
    // for the nth sequence
    int a = 0;
    int b = 1;
    int next_term;
    
    if (n == 0) return a;
    if (n == 1) return b;
    for(int i = 2; i <= n;i++){ 
        next_term = a + b;
        a = b;
        b = next_term;
    }
    return b;
}
void displayFibonacciPart(int start, int count) {
    // for the start and count
    for(int i = 0; i < count; i++){
    int fib_num = fibonacciCount(start + i);
    printf("%d ",fib_num);
    }
}
