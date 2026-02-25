#include<stdio.h>

void num_break(int *num);

void num_break(int *num){

    while (*num != 0){
        printf("Enter a number: ");
        scanf("%d", num);
        if(*num == 0){
        break;
        }
        printf("Number: %d\n",*num);
    }
        
}

int main(){
    
    int n = 1;
    
    num_break(&n);
    
    return 0;
}
