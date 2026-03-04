#include<stdio.h>
#include<math.h>

double calculateCylinderVolume();

double calculateCylinderVolume(){
    
    double radius = 0;
    double height = 0;
    double volume = 0;
    
    printf("Enter the radius of the cylinder: ");
    scanf(" %lf", &radius);
    
    printf("Enter the height of the cylinder: ");
    scanf(" %lf", &height);
    
    volume = 3.141592653589793 * pow(radius,2.0) * height * 4;
    
    printf("Result: %.2lf", volume);
    
    return volume;
}

int main(){
    
    calculateCylinderVolume();
    
    return 0;
}
