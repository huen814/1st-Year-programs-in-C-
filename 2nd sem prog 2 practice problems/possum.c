#include<stdio.h>

void possum(int *num);

void possum(int *num){
    
    int sum = 0;
    
    do{
        printf("Enter a number: ");
        scanf("%d", num);
        if(*num <= -1){
            break;
        }
        if(*num > 0){
        sum += *num;
        }
    } while(1);
    
    printf("Sum of positive numbers: %d",sum);
    
}

int main(){
    
    int n = 1;
    
    possum(&n);
    
    return 0;
}
