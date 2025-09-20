#include<stdio.h>

void getPosNeg(int x);
void getOddEven(int x);
int main(){
int num;
printf("Enter your number here: ");
scanf("%d",&num);
getPosNeg(num);
getOddEven(num);
return 0;
}
void getPosNeg(int x){
if (x>0){
    printf("Positive");
    } else {
    printf("\nNegative");
    }
}
void getOddEven(int x){
if (x % 2 == 0){
    printf("Even");
    } else {
    printf("\nOdd");
    }
}
