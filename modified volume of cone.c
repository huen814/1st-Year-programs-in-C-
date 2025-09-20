#include<stdio.h>
#include<math.h>

double calculateConeVolume(double radius, double height);
int main()
{
    double radius,height,volume,mult,sub;
    printf("Enter the radius of the cone: ");
    scanf("%lf",&radius);
    printf("Enter the height of the cone: ");
    scanf("%lf",&height);

    volume = (1.0/3.0) * 3.141592653589793 * (radius*radius) * height;
    mult = volume * 5;
    sub = mult - 1000;
    printf("Result: %.2lf",sub);
    return volume;
}
double calculateConeVolume(double radius, double height){
    double volume;
    volume;
    return volume = 1.0/3.0 * 3.141592653589793 * (radius*radius) * height;
}
