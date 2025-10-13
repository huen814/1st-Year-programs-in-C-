#include<stdio.h>

void debbieDowner(float n1,float n2,float n3,float n4,float n5);
// I did so bad here ngl
int main(){
    
    float n1,n2,n3,n4,n5;
    float sum = 0;
    int hasNegative = 0;
    
    printf("Enter the first number: ");
        scanf("%f",&n1);
    printf("Enter the second number: ");
        scanf("%f",&n2);
    printf("Enter the third number: ");
        scanf("%f",&n3);
    printf("Enter the fourth number: ");
        scanf("%f",&n4);
    printf("Enter the fifth number: ");
        scanf("%f",&n5);
    
    debbieDowner(n1,n2,n3,n4,n5);
    
    return 0;
}
void debbieDowner(float n1,float n2,float n3,float n4,float n5){
    float sum = 0;
    int hasNegative = 0;
        if (n1 < 0){
            sum += n1;
            hasNegative = 1;
        }
        if (n2 < 0){
            sum += n2;
            hasNegative = 1;
        }
        if (n3 < 0){
            sum += n3;
            hasNegative = 1;
        }
        if (n4 < 0){
            sum += n4;
            hasNegative = 1;
        }
        if (n5 < 0){
            sum += n5;
            hasNegative = 1;
        }
        if (hasNegative){
            printf("Sum of all negative integers = %.2f",sum);
        }
        else {
            printf("There are no positive integers");
        }
}
       
