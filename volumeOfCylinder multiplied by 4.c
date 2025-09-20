#include<stdio.h>

double calculateCylinderVolume(double radius,double height);
int main()
{
    double radius,height,volume;
    printf("Enter the radius of the cylinder: ");
    scanf("%lf",&radius);
    printf("Enter the height of the cylinder: ");
    scanf("%lf",&height);
    volume = 3.141592653589793 * radius*radius * height * 4;
    printf("Result: %.2lf",volume);
    return 0;
}
double calculateCylinderVolume(double radius,double height){
    double volume;
    volume = 3.141592653589793 * radius * radius * height * 4;
    return volume;
}
