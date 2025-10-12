#include<stdio.h>
#include<math.h>

    double computeHypotenuse(double height, double base);
    int main(){
        
        double height, base, triangleHypotenuse;
        
        printf("Enter the triangle's height: ");
            scanf("%lf",&height);
        printf("\n\n");
        printf("Triangle's base: ");
            scanf("%lf",&base);
            
            triangleHypotenuse = computeHypotenuse(height,base);
            
        printf("Triangle's hypotenuse: %.2lf",triangleHypotenuse);
        return 0;
    }
    double computeHypotenuse(double height,double base){
        double triangleHypotenuse;
        triangleHypotenuse = pow(height,2.0) + pow(base,2.0);
        return sqrt(triangleHypotenuse);
    }
    
