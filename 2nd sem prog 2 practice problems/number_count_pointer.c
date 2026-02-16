#include<stdio.h>


int main(){
    
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;
    int pos_count = 0;
    int neg_count = 0;
    int zero_count = 0;
    
    printf("Enter first integer: ");
    scanf("%d",&num1);
    
    printf("Enter second integer: ");
    scanf("%d",&num2);
    
    printf("Enter third integer: ");
    scanf("%d",&num3);
    
    printf("Enter fourth integer: ");
    scanf("%d",&num4);
    
    printf("Enter fifth integer: ");
    scanf("%d",&num5);
    
    if(num1 > 0){
        pos_count++;
    } 
    else if(num1 < 0){
        neg_count++;
    }
    else{
        zero_count++;
    }
    
    if(num2 > 0){
        pos_count++;
    } 
    else if(num2 < 0){
        neg_count++;
    }
    else{
        zero_count++;
    }
    
    if(num3 > 0){
        pos_count++;
    } 
    else if(num3 < 0){
        neg_count++;
    }
    else{
        zero_count++;
    }
    
    if(num4 > 0){
        pos_count++;
    } 
    else if(num4 < 0){
        neg_count++;
    }
    else{
        zero_count++;
    }
    
    if(num5 > 0){
        pos_count++;
    } 
    else if(num5 < 0){
        neg_count++;
    }
    else{
        zero_count++;
    }
    
    
    
    printf("Positive count: %d\n",pos_count);
    printf("Negative count: %d\n",neg_count);
    printf("Zero count: %d\n",zero_count);
    
    return 0;
}
