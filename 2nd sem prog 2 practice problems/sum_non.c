#include<stdio.h>

void sum_non(int *num);

void sum_non(int *num){
    
    int input = 0;
    int sum = 0;
    
    do{
        printf("Enter a number: ");
        scanf("%d",&input);
        if(input < 0){
            continue;
        }
        if(input == 0){
            break;
        }
        sum += input;
    } while(1);
    
    printf("Sum: %d",sum);
}

int main(){
    
    int n = 0;
    
    sum_non(&n);
    
    return 0;
}
