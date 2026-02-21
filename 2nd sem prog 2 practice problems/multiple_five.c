#include<stdio.h>

void multiple_five(int *num);

void multiple_five(int *num){
    
    
    for(int i = 1; i <= *num; i++){
        printf("%d\n",i * 5);
    }
    
}

int main(){
    
    int n = 0;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    multiple_five(&n);
    
    return 0;
}
