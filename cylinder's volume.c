#include<stdio.h>
#include<math.h>

double computeVolume(double height,double radius);

int main(){
    
    double height,radius,volume;
    
        printf("Enter the cylinder's height: ");
            scanf("%lf",&height);
        printf("\n\n");
        printf("Cylinder's radius: ");
            scanf("%lf",&radius);
        
        volume = computeVolume(height,radius);
        return 0;
}
double computeVolume(double height, double radius){
    double volume;
    double pi = 3.1416;
    volume = pi * (pow(radius,2.0) * height);
    printf("Cylinder's volume: %.2f",volume);
    return volume;
}
