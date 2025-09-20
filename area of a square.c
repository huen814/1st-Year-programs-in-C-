#include<stdio.h>
#include<math.h>

int main(){
    double length = 0;
    double square = 2.0;
    printf("Enter the length of the side: ");
    scanf("%lf",&length);
    double area = pow(length,square);
    printf("The area of the square is %.1lf",area);

    return 0;
}
