#include<stdio.h>

void float_point(float *point);

void float_point(float *point){

    int limit = 9;
    int i;
    float average = 0;
    
    printf("Enter 10 floating-point numbers:\n");
    for(i = 0; i <= limit; i++){
        scanf(" %f",&point[i]);
    }
    
    for(i = 0; i <= limit; i++){
        average += point[i];
    }
    average /= 10;
    
    printf("The average is: %.2f",average);
    
}
int main(){
    
    float arr[10];
    
    float_point(&arr[0]);
    
    return 0;
}
