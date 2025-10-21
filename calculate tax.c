#include<stdio.h>

float calculateTax(float salary);

int main(){
    
    float salary, totalTax = 0;
    
        printf("Enter your salary: ");
            scanf("%f",&salary);
            
        totalTax = calculateTax(salary);
        
        printf("Your tax is: %.2f",totalTax);
        
        return 0;
}
float calculateTax(float salary){
    
    float totalTax = 0;
    
    if (salary < 10000){
        totalTax = 0.00;
    }
    else if (salary < 20000){
        totalTax = (salary - 10000) * 0.10;
    }
    else{
        totalTax = (10000 * 0.10) + (salary - 20000) * 0.20;
    }
    return totalTax;
}
