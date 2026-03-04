#include<stdio.h>
#include<math.h>

void evaluatePolynomial(double *a, double *b, double *c, double *d,double *x);

void evaluatePolynomial(double *a, double *b, double *c, double *d, double *x){
    
    double value = *a * pow(*x,3.0) + *b * pow(*x,2.0) + (*c * *x) + *d;
    
    printf("Value of the polynomial: %.2lf",value);
}

int main(){
    
    double co_a = 0;
    double co_b = 0;
    double co_c = 0;
    double co_d = 0;
    double x_value = 0;
    
    printf("Enter coefficient a: ");
    scanf("%lf", &co_a);
    printf("Enter coefficient b: ");
    scanf("%lf", &co_b);
    printf("Enter coefficient c: ");
    scanf("%lf", &co_c);
    printf("Enter coefficient d: ");
    scanf("%lf", &co_d);
    printf("Enter value of x: ");
    scanf("%lf", &x_value);
    
    evaluatePolynomial(&co_a,&co_b,&co_c,&co_d,&x_value);
    
    return 0;
}
