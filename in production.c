#include<stdio.h>
// in production

float inProduction(float n1,float n2);

int main(){
    
        float n1,n2,product;
        
            printf("Enter the first number: ");
                scanf("%f",&n1);
            printf("Enter the second number: ");
                scanf("%f",&n2);
            
            product = inProduction(n1,n2);
            
            printf("Product = %.2lf",product);
            
            return 0;
}
float inProduction(float n1,float n2){
    double product;
    return product = n1 * n2;
}
