#include<stdio.h>

float simplyInterested(float amount, float ratePercentage,float years);
// monthly fee for a car for the next few years
int main(){

    float amount, ratePercentage,years, simpleInterest;
        
        printf("Enter the amount: ");
            scanf("%f",&amount);
        printf("Enter the rate percentage: ");
            scanf("%f",&ratePercentage);
        printf("Enter the number of years: ");
            scanf("%f",&years);
        
        simpleInterest = simplyInterested(amount,ratePercentage,years);
        
        printf("Simple Interest = %.2f",simpleInterest);
        
        return 0;
    }
    float simplyInterested(float amount, float ratePercentage,float years){
    float simpleInterest;
    return simpleInterest = (amount * ratePercentage * years) / 100;
    }
