#include<stdio.h>

float convertCurrency(float amount, int fromCode, int toCode){
// USD = 1 PHP = 2 EUR = 3
// USD <-> PHP only
// EUR <-> PHP only
// had trouble doing logical statements, need to practice more.
    if (fromCode == 1 && toCode == 2 ){
        return amount * 58;
    }
    else if (fromCode == 2 && toCode == 1){
        return amount / 58;
    }
    else if (fromCode == 3 && toCode == 2 ){
        return amount * 62;
    }
    else if (fromCode == 2 && toCode == 3){
        return amount / 62;
    }
    else if (fromCode == toCode){
        printf("Conversion must not be the same.");
    } else {
        printf("Conversion not supported.");
        return 0;
}
}
int main(){
    float amount,currency;
    int fromCode, toCode;
    printf("Enter amount: ");
    scanf("%f",&amount);
    printf("\nWhat currency from? USD = 1 PHP = 2 EUR = 3\n");
    scanf("%d",&fromCode);
    printf("What currency to? USD = 1 PHP = 2 EUR = 3\n");
    scanf("%d",&toCode);
    currency = convertCurrency(amount,fromCode,toCode);
    if (currency != 0){
        printf("Converted amount: %.2f\n",currency);
    }
return 0;
}
