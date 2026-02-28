#include<stdio.h>

void print_please(double *display,int *c);

void print_please(double *display,int *c){
    
    *c = 6;
    
    printf("Enter 6 double values:\n");
    for(int i = 0; i < *c; i++){
        scanf("%lf",&display[i]);
    }
    
    printf("Array elements:\n");
    for(int i = 0; i < *c; i++){
        printf("%.3lf\t",display[i]);
    }
    
}
int main(){
    
    double array[6];
    int count = 5;
    
    print_please(&array[0],&count);
    
    return 0;
}
