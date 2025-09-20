#include<stdio.h>

double calculateSquareArea(double square);
double calculateCircleArea(double radius);
int main(){
    double square,radius,squareroot,circle,totalArea;
    printf("Enter the side of the square: ");
    scanf("%lf",&square);
    printf("Enter the radius of the circle: ");
    scanf("%lf",&radius);
    squareroot = square * square;
    circle = 3.141592653589793 * radius * radius;
    totalArea = squareroot + circle;
    printf("Total area (square + circle): %.2lf",totalArea);
}
double calculateSquareArea(double square){
    double squareroot;
    squareroot = square * square;
    return squareroot;
}
double calculateCircleArea(double radius){
    double circle;
    circle = 3.141592653589793 * radius * radius;
    return circle;
}
