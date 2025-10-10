#include<stdio.h>
// man this program is actually so simple idk why I thought you needed to convert it
int main(){
    
    float length;
    double area;
        
        printf("Enter the length of the side: ");
            scanf("%f",&length);
            area = length * length;
            
        printf("Area of the square backyard = %.2lf",area);
    return 0;
}
