#include<stdio.h>

int main(){
int amount;
int money1000,money500,money100,money50,money20,money10;
money1000=money500=money100=money50=money20=money10=0;
printf("Enter the amount: ");
scanf("%d",&amount);

money1000 = amount/1000;
amount = amount%1000;

money500 = amount/500;
amount = amount%500;

money100 = amount/100;
amount = amount%100;

money50 = amount/50;
amount = amount%50;

money20 = amount/20;
amount = amount%20;

money10 = amount/10;
amount = amount%10;


printf("1000: %d\n",money1000);
printf("500: %d\n",money500);
printf("100: %d\n",money100);
printf("50: %d\n",money50);
printf("20: %d\n",money20);
printf("10: %d\n",money10);

return 0;
}
