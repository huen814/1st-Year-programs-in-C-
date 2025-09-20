#include<stdio.h>

///function prototype
int add(int x,int y);
int subtract(int x,int y);
int multi(int x,int y);
float division(float x,float y);

int main(){
//function call
    int x,y,sum,difference,product;
    float quotient;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
    sum = add(x,y);
    difference = subtract(x,y);
    product = multi(x,y);
    quotient = division(x,y);
    printf("Results: ");
    printf("\nSum: %d",sum);
    printf("\nDifference: %d",difference);
    printf("\nProduct: %d",product);
    printf("\nQuotient: %.2f",quotient);
    return 0;
}

int add(int x,int y){
    int sum;
    sum = x+y;
    return sum;
}
int subtract(int x, int y){
    int difference;
    difference = x-y;
    return difference;
}
int multi(int x,int y){
    int product;
    product = x*y;
    return product;
}
float division(float x,float y){
    float quotient;
    quotient = x / y;
    return quotient;
}
