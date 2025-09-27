#include<stdio.h>
// I did horrible, I made AI rewrite my code because it had logical errors.
float computeBill(float kWh,int isLate){
    float bill = 0;
    if (kWh <= 100){
        bill = kWh * 5;
    }
    else if (kWh <= 200) {
        bill = 100 * 5 + (kWh - 100) * 7;
    }
    else if (kWh > 200) {
        bill = 100 * 5 * 7 + (kWh - 200) * 10;
    }
    return bill;
}
    int main(){
    float kWh,billAmount;
    int isLate;
    printf("Enter your electricity bill's pricing in kWh: ");
    scanf("%f",&kWh);
    billAmount = computeBill(kWh,isLate);
    printf("Your bill amount is %.2f pesos",billAmount);
    printf("\nWere you late in paying your bill? Type 1 if yes, Type 0 if no.\n");
    scanf("%d",&isLate);
    if (isLate == 1){
    float penalty = billAmount * 0.10;
    float total = billAmount + penalty;
    printf("10%% penalty to your bill amount, which in total is %.2f",total);
    }
    else if (isLate == 0) {
    printf("No penalty applied.");
    printf("\nYour total is %.2f",billAmount);
    }
return 0;
}
