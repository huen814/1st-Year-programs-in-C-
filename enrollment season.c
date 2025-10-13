#include<stdio.h>

float enrollmentSeason(float amount,int modeofPayment){
    
    float totalAmount;
    
    switch(modeofPayment){
        case 1: //cash - 10% discount
        totalAmount = amount - (amount * 0.10);
        
            printf("Total amount to be paid = %.2f",totalAmount);
        break;
        case 2: //two-installment - 5% interest
        totalAmount = amount + (amount * 0.05);
        
            printf("Total amount to be paid = %.2f",totalAmount);
        break;
        case 3: // three-installment - 10% interest
        totalAmount = amount + (amount * 0.10);
            printf("Total amount to be paid = %.2f",totalAmount);
        break;
    }
}
int main(){
    
    float amount,totalAmount;
    int modeofPayment;
    
        printf("Enter the mode of payment: ");
            scanf("%d",&modeofPayment);
        printf("Enter the amount: ");
            scanf("%f",&amount);
        
        totalAmount = enrollmentSeason(amount,modeofPayment);
        
        return 0;
}
