#include<stdio.h>

double calculateRectangleArea(double length,double width);
double calculateTrapezoidArea(double base1,double base2,double height);
int main()
{
    double length,width,base1,base2,height,areaRectangle,areaTrapezoid,areaDifference;
    printf("Enter the length of the rectangle: ");
    scanf("%lf",&length);
    printf("Enter the width of the rectangle: ");
    scanf("%lf",&width);
    printf("Enter the base 1 of the trapezoid: ");
    scanf("%lf",&base1);
    printf("Enter the base 2 of the trapezoid: ");
    scanf("%lf",&base2);
    printf("Enter the height of the trapezoid: ");
    scanf("%lf",&height);
    areaRectangle = length * width;
    areaTrapezoid = 0.5 * (base1 + base2) * height;
    areaDifference = areaRectangle - areaTrapezoid;
    printf("Area difference (rectangle - trapezoid): %.1lf",areaDifference);
    return 0;
}
    double calculateRectangleArea(double length,double width){
        double areaRectangle;
        areaRectangle;
        return areaRectangle = length * width;
    }
    double calculateTrapezoidArea(double base1,double base2,double height){
        double areaTrapezoid;
        areaTrapezoid;
        return areaTrapezoid = 0.5 * (base1 + base2) * height;
    }
