#include<stdio.h>

void numbered_triangle(int *num);

void numbered_triangle(int *num){
    
    for(int i = 1; i <= *num;i++){
        for(int j = 1; j <= i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    
}

int main(){
    
    int n = 0;
    
    printf("Enter an integer: ");
    scanf("%d",&n);
    
    numbered_triangle(&n);
    
    return 0;
}
