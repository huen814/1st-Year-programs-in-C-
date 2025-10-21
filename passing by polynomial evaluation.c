#include<stdio.h>
#include<math.h>

double evaluatePolynomial(double a,double b, double c, double d, double x);
double showResult(double value);

int main(){
    
    double a,b,c,d,x,value = 0;
    
        printf("Enter coefficient a: ");
            scanf("%lf",&a);
        printf("Enter coefficient b: ");
            scanf("%lf",&b);
        printf("Enter coefficient c: ");
            scanf("%lf",&c);
        printf("Enter coefficient d: ");
            scanf("%lf",&d);
        printf("Enter value of x: ");
            scanf("%lf",&x);
        
        value = evaluatePolynomial(a,b,c,d,x);
        value = showResult(value);
        
        printf("Value of the polynomial: %.2lf",value);
        
    return 0;
}
double evaluatePolynomial(double a,double b, double c, double d, double x){
    double value;
    return value = a * pow(x,3.0) + b * pow(x,2.0) + c * x + d;
}
double showResult(double value){
    return value;
}
