#include<stdio.h>
#include<math.h>

double calculatePyramidVolume(double base, double height);
int main(){
    double base,height,volume,cubedVolume;
    printf("Enter the base area of the pyramid: ");
    scanf("%lf",&base);
    printf("Enter the height of the pyramid: ");
    scanf("%lf",&height);
    volume = (1.0/3.0) * base * height;
    cubedVolume = pow(volume,3);
    printf("Result: %.2lf",cubedVolume);
    return 0;
}
double calculatePyramidVolume(double base, double height){
    double volume;
    volume;
    return volume = (1.0/3.0) * base * height;
}
