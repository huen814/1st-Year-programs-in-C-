#include<stdio.h>

void factor(int *num);

void factor(int *num){
    
    int i = 1;
    
    printf("Enter an integer: ");
    scanf("%d", num);
    printf("Factors of %d: ",*num);
    
    do{
        if(*num % i == 0){
            printf("%d ", i);
        }    
        i++;
    } while(i <= *num);
    
    
}

int main(){
    
    int n = 0;
    
    factor(&n);
    
    return 0;
}
