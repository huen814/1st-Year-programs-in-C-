#include<stdio.h>

void alphaba(int *num);

void alphaba(int *num){
    
    int i,j;
    char alphabet = 'A';
    
    for(i = 1; i <= *num; i++){
        for(j = 0; j <= i; j++){
            printf("%c ",alphabet + j);
        }
        printf("\n");
    }
    
}

int main(){
    
    int n = 0;
    
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    
    alphaba(&n);
    
    return 0;
}
