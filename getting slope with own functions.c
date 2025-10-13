#include<stdio.h>

void getInput(float x, float y);
float setValue(float y2,float y1,float x2,float x1);

int main(){
    
    float y2,y1,x2,x1,slope;
    
    printf("Enter y2: ");
        scanf("%f",&y2);
    printf("Enter y1: ");
        scanf("%f",&y1);
    printf("Enter x2: ");
        scanf("%f",&x2);
    printf("Enter x1: ");
        scanf("%f",&x1);
    
    slope = setValue(y2,y1,x2,x1);
    
    printf("Slope = %.2f",slope);
    
    return 0;
}
    void getInput(float x,float y){
    }
    float setValue(float y2,float y1,float x2,float x1){
    return (y2 - y1) / (x2 - x1);
    }
        
