// Header file declaration
#include<stdio.h>
#include<math.h>

// Main function
int main() {
    // Variable declarations
    float principal, rate, time, future;
    int periods;

    // Insert printf and scanf statements here...
    printf("Enter the principal amount: ");
    scanf("%f",&principal);
    printf("Enter the annual interest rate (%): ");
    scanf("%f",&rate);
    printf("Enter the number of times the interest will be compounded annually: ");
    scanf("%f",&time);
    printf("Enter the time (years): ");
    scanf("%d",&periods);

    // Insert if statement to check if periods is equal to 0

    // Convert the interest rate to a decimal here...

    // Compound interest formula here...
    future = principal * (1 + rate/time)^(time * periods);

    // Insert final printf statement here...
    printf("After %d years, the future value of the investment would be %f",periods,future);

    return 0;
}
