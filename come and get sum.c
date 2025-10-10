#include<stdio.h>

int comeandgetSum(int n1,int n2);

int main(){
    
    int n1,n2,sum;
        
        printf("Enter the first number: ");
            scanf("%d",&n1);
              if (n1 <= 0){
                printf("Must be a whole number.");
                return 0;
              }
        printf("Enter the second number: ");
            scanf("%d",&n2);
        sum=comeandgetSum(n1,n2);
        
        printf("%d + %d = %d",n1,n2,sum);
        
        return 0;
}
    int comeandgetSum(int n1,int n2){
        int sum;
        return sum = n1 + n2;
    }
