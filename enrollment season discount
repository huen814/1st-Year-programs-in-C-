#include<stdio.h>
//how did I have an easier time coding this than in my own compiler aka codeblocks HAHAHHA
float enrollmentPayment(int payment, float amount){
    switch (payment) {
        case 1:
            amount = amount * 0.9;
        break;
        case 2:
            amount = amount * 1.05;
        break;
        case 3:
            amount = amount * 1.10;
        break;
        default:
        break;
    }
    return amount;
}
int main(){
    float amount,totalAmount;
    int payment;
        printf("Enter the mode of payment: ");
        scanf("%d",&payment);
        printf("Enter the amount: ");
        scanf("%f",&amount);
        totalAmount = enrollmentPayment(payment,amount);
        printf("Total amount to be paid = %.2f",totalAmount);
    return 0;
}
