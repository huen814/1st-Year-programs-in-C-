#include<stdio.h>

void average_calculation(int *num);

void average_calculation(int *num){
    
    int input = 0;
    int sum = 0;
    int count = 0;
    
    do{
            printf("Enter a number: ");
            scanf(" %d",&input);
            if(input < 0){
                continue;
            }
            if(input == 0){
                break;
            }
                sum += input;
                count++;
    }while(1);
    
    float average = (float)sum / count;
    
    printf("Average: %.2f",average);
}

int main(){
    
    int n = 0;
    
    average_calculation(&n);
    
    return 0;
}
