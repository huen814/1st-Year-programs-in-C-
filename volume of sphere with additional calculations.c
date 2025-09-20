#include<stdio.h>

double calculateSphereVolume(double radius);

int main(){
    double radius,volume,squared;
    printf("Enter the radius of the sphere: ");
    scanf("%lf",&radius);
    volume = 4.0/3.0 * 3.141592653589793 * radius * radius * radius;
    squared = (volume * volume)/100;
    printf("Result: %.2lf",squared);
    return 0;
}
double calculateSphereVolume(double radius){
    double volume;
    volume;
    return volume = 4.0/3.0 * 3.141592653589793 * radius * radius * radius;
}
