#include<stdio.h>

int computeTaxBracket(float income){
// must input income without comma or the program wont print an output.
    if (income <= 250000)
    return 0;
    else if (income >= 250001 && income <= 400000)
    return 1;
    else if (income > 400001 && income <= 800000)
    return 2;
    else if (income > 800000)
    return 3;
}
int main()
{
    float income;
    printf("Enter your income: ");
    scanf("%f",&income);
    int bracket = computeTaxBracket(income);
    if (bracket == 0) printf("Below 250,000");
    else if (bracket == 1) printf("250,001 - 400,000");
    else if (bracket == 2) printf("400,001 - 800,000");
    else if (bracket == 3) printf("Above 800,000");

    return 0;
    }
