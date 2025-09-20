#include<stdio.h>

int main(){
    double y2;
    double y1;
    double x2;
    double x1;
    float m;
    printf("Enter y2: ");
    scanf("%lf",&y2);
    printf("Enter y1: ");
    scanf("%lf",&y1);
    printf("Enter x2: ");
    scanf("%lf",&x2);
    printf("Enter x1: ");
    scanf("%lf",&x1);
    printf("Slope = %.2f",m);
    m = (y2-y1)/(x2-x1);
}
