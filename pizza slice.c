#include<stdio.h>

float pizzaSlice(float base, float height);

int main(){
    
    float base,height,area;
        printf("Enter the base of the pizza slice: ");
            scanf("%f",&base);
        printf("Enter the height of the pizza slice: ");
            scanf("%f",&height);
            
            area=pizzaSlice(base,height);
            
        printf("Area of the pizza slice = %.2f",area);
    return 0;
}
float pizzaSlice(float base, float height){
    float area;
    return area = (base * height) / 2;
    }
