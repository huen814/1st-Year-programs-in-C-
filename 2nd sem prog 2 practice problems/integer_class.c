#include<stdio.h>

void integer_class(int *num);

void integer_class(int *num){
    
    do{
        printf("Enter an integer: ");
        scanf("%d", num);
        
        if(*num > 0){
            printf("positive\n");
        } else if(*num < 0){
            printf("negative\n");
        }
    } while(*num != 0);
    
}

int main(){
    
    int n;
    
    integer_class(&n);
    
    return 0;
}
