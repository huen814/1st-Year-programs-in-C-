#include<stdio.h>

void all_or_nothing(int *num1,int *num2,int *num3);

int main(){
    
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    
    all_or_nothing(&n1,&n2,&n3);
    
    if(n1 > 0 && n2 > 0 && n3 > 0){
        printf("All numbers are positive.");
    }
    else if(n1 < 0 && n2 < 0 && n3 < 0){
        printf("All numbers are negative.");
    }
    else if(n1 % 2 == 0 && n2 % 2 == 0 && n3 % 2 == 0){
        printf("All numbers are even.");
    }
    else if(n1 % 2 != 0 && n2 % 2 != 0 && n3 % 2 != 0){
        printf("All numbers are odd.");
    }
    else{
        printf("Numbers are different.");
    }
    
    return 0;
    
}
void all_or_nothing(int *num1, int *num2, int *num3){
    
    printf("Enter first number: ");
    scanf("%d",num1);
    
    printf("Enter second number: ");
    scanf("%d", num2);
    
    printf("Enter third number: ");
    scanf("%d", num3);
    
    
}
