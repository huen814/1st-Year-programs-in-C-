#include<stdio.h>


double calculateCircleSectorPerimeter(double radius,double arcLength);
int main()
{
    double radius,arcLength,perimeter;
    printf("Enter the radius of the circle sector: ");
    scanf("%lf",&radius);
    printf("Enter the arc length of the circle sector: ");
    scanf("%lf",&arcLength);
    perimeter = 2 * radius + arcLength;
    printf("Perimeter of the circle sector: %.2lf",perimeter);
    return 0;
}
double calculateCircleSectorPerimeter(double radius,double arcLength){
    double perimeter;
    perimeter;
    return perimeter = 2 * radius + arcLength;
}
