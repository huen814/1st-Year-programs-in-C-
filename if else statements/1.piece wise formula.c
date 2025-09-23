#include<stdio.h>

float evaluatePiecewise(float x){
    if (x < 0){
        return x * x;
    }
    else if (0 <= x < 10){
        return 2 * x + 1;
    }
    else if (x >= 10){
        return x / 2;
    }
}
int main(){
    float x;
        printf("Enter a value: ");
        scanf("%f",&x);
    float result = evaluatePiecewise(x);
        printf("%.2f",result);
    return 0;
}