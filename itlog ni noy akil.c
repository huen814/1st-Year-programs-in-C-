#include<stdio.h>


int main(){
    
    int egg, orders;
    float amount, eggPrice;
    
        printf("Itlog ni Noy AKIL!");
        printf("\n[1] #16 @ Php 15.00");
        printf("\n[2] #18 @ Php 22.00");
        printf("\n[3] penoy @ Php 13.00\n");
        
            do{
             printf("Enter your egg type: ");
                scanf("%d",&egg);
            } while (egg < 0 || egg > 3);
            
            if (egg == 1){
                eggPrice = 15.00;
            }
            else if (egg == 2){
                eggPrice = 22.50;
            }
            else if (egg == 3){
                eggPrice = 13.00;
            }
            
        printf("Enter total egg orders: ");
            scanf("%d",&orders);
        printf("Enter amount: ");
            scanf("%f",&amount);
            // The whole problem was it should have been divisible by 150;
            int sets = orders / 150;
            
            float discount;
            if (sets >= 2){
                discount = 0.10;
            }
            else if (sets == 1){
                discount = 0.05;
            }
            else {
                discount = 0.00;
            }
        //formulas
        float totalCost = eggPrice * orders; //correct
        float discountAmount = totalCost * discount; // correct
        float discountedPrice = totalCost - discountAmount; // correct
        float change = amount - discountedPrice; //correct
        
        printf("\n");
        printf("\nSUMMARY");
        printf("\nTotal Cost: Php %.2f",totalCost);
        printf("\nDiscount: Php %.2f",discountAmount);
        if (discount > 0){
            printf("\nDiscounted Price: Php %.2f",discountedPrice);
        }
        if (change < 0){
            printf("\nChange: (Php %.2f)",-change);
        }
        else {
        printf("\nChange: Php %.2f",change);
        }
        
    return 0;           
}
