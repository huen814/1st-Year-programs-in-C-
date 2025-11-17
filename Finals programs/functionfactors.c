#include <stdio.h>
#include <math.h>

// Function to display all factors of a given number
void displayFactors(int n) {
    
    int i;
    int limit = sqrt(n);
    
    printf("Factors of %d:\n",n);
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d * %d = %d\n",i,n/i,n);
        }
    }
}

int main() {
    
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num <= 0){
        printf("Error: Please enter a positive integer.");
    }
    else{
    displayFactors(num);
    }
    
    return 0;
}
