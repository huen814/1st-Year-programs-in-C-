#include<stdio.h>

int main(){
    //Fruit order
    int fruit,pieces;
    float cost,amountOfMoney;
    
    printf("| FRUIT VENDOR |");
    printf("\n[1] Apples: Php 20.00 each");
    printf("\n[2] Oranges: Php 25.00 each");
    printf("\n[3] Bananas: Php 15.00 each");
    
    do{
        printf("\nPick a fruit: ");
            scanf("%d",&fruit);
    } while (fruit < 0 || fruit > 3);
    
        if (fruit == 1){
            cost = 20.00;
        }
        else if (fruit == 2){
            cost = 25.00;
        }
        else if (fruit == 3){
            cost = 15.00;
        }
    
    printf("\nHow many pieces will you buy? - ");
        scanf("%d",&pieces);
        
    int amount;
    
    printf("\nAmount of money paid - ");
        scanf("%f",&amountOfMoney);
        
    float totalCost;
    int bundles;
    float discountAmount;
    // If the customer buys a bundle, they will get a 12% discount on everything;
    if(pieces >= 100){
        bundles = pieces / 100;
        totalCost = pieces * cost;
        discountAmount = totalCost * 0.12;
    }
    else{
        totalCost = pieces * cost;
        discountAmount = 0.0;
    }
    float discountedPrice =  totalCost - discountAmount;
    float change = amountOfMoney - discountedPrice;
    
    //SUMMARY
    printf("\nRECEIPT:");
    printf("\nTotal Cost: Php %.2f",totalCost);
    printf("\nDiscount Amount: Php %.2f",discountAmount);
    if (discountAmount > 0){
        printf("\nDiscounted Price: Php %.2f",discountedPrice);
    }
    if (change < 0){
    printf("\nChange: Php (%.2f)",-change);
    } 
    else{
        printf("\nChange: Php %.2f",change);
    }
    
    return 0;
}
