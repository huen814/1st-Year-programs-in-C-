#include<stdio.h>

float calculateShippingCost(float weight, char destination);

int main(){
    
    float weight, shippingCost;
    char destination;
    
    printf("Enter the weight of the package in kg: ");
        scanf("%f",&weight);
    printf("Enter the destination (L for Local, I for International): ");
        scanf(" %c", &destination);
    
    shippingCost = calculateShippingCost(weight,destination);
    
    printf("Your total shipping cost is: %.2f",shippingCost);
    
return 0;
}
float calculateShippingCost(float weight, char destination){
    float shippingCost;
    
    if (weight <= 5){
        if (destination == 'L'){
           shippingCost = 10;
        }
        else if (destination == 'I'){
            shippingCost = 30;
        }
    }
    if (weight > 5 && weight <= 20){
        if (destination == 'L'){
            shippingCost = 25;
        }
        else if (destination == 'I'){
            shippingCost = 75;
        }
    }
    if (weight > 20){
        if (destination == 'L'){
            shippingCost = 50;
        }
        else if (destination == 'I'){
            shippingCost = 150;
        }
    }
    return shippingCost;
}
