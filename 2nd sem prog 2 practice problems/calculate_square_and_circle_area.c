#include<stdio.h>
#include<math.h>

double calculateSquareArea();
double calculareCircleArea();

double calculateSquareArea(){
    
    double square = 0;
    double sarea = 0;
    
    printf("Enter the side of the square: ");
    scanf(" %lf", &square);
    
    sarea = square * square;
    
    return sarea;
}

double calculateCircleArea(){
    
    double circle = 0;
    double carea = 0;
    
    printf("Enter the radius of the circle: ");
    scanf(" %lf", &circle);
    
    carea = 3.141592653589793 * pow(circle,2.0);
    
    return carea;
}

int main(){
    
    double sa = 0;
    double ca = 0;
    double total_area = 0;
    
    sa = calculateSquareArea();
    ca = calculateCircleArea();
    
    total_area = sa + ca;
    
    printf("Total area (square + circle): %.2lf",total_area);
    
    return 0;
}
