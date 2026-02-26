#include<stdio.h>

void skip_four(int *num);

void skip_four(int *num){
    
    for(int i = 1; i <= *num;i++){
        if(i == 4){
            continue;
        }
        printf("%d ",i);
    }
    
}
int main(){

    int n = 0;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    skip_four(&n);

    return 0;
}
