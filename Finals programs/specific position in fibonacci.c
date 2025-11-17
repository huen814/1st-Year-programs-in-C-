#include <stdio.h>

int fibonacci(int pos);

int main() {
    int position;
    printf("Enter the position in the Fibonacci sequence: ");
    scanf("%d", &position);
    if (position == 0){
        printf("Fibonacci number at position 0 is 0");
    }
    else if (position < 0){
        printf("Error: Position must be non-negative.");
    }
    else{
    int result = fibonacci(position);
    if (result != -1) {
        printf("Fibonacci number at position %d is %d\n", position, result);
        }
    }
    
    return 0;
}

// Function to return Fibonacci number at a given position
int fibonacci(int pos) {
    // To do code logic
    int a = 0;
    int b = 1;
    int next_fib;
    
    for(int i = 2; i <= pos; i++){
        next_fib = a + b;
        a = b;
        b = next_fib;
    }
    return b;
}
