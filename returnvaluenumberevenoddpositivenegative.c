#include<stdio.h>

int getValue(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    return num;
}
void getOddEven(int x){
    if(x % 2==0){
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }
}
    void getPosNeg(int x){
        if (x<0){
            printf("The number is Negative\n");
     } else {
         printf("The number is Positive\n");
     }
    }
    int main(){
        int value;
        value = getValue();
        getOddEven(value);
        getPosNeg(value);
        return 0;
    }
    
