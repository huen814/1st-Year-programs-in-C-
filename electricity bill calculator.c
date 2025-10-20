#include<stdio.h>

// electricity bill calculator

    float calculateBill(int units);
    
        int main(){
            
            int units;
            float totalBill = 0.0;
            
            printf("Enter the number of units consumed: ");
                scanf("%d",&units);
            
            totalBill = calculateBill(units);
            
            printf("Your total bill is: %.2f",totalBill);
                
                
        }
    float calculateBill(int units){
        
        float totalBill = 0.0;
        
        if (units <= 100){
            totalBill = units * 2.50;
        }
        if (units <= 200){
            totalBill = 100 * 2.50 + (units - 100) * 3.50;
        }
        if (units > 200){
            totalBill = 100 * 2.50 + 100 * 3.50 + (units - 200) * 5.00;
        }
        if (totalBill > 500){
            totalBill += totalBill * 0.10;
        }
        return totalBill;
    }
