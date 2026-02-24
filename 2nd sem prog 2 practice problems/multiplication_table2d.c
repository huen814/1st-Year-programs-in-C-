#include<stdio.h>

void multi(int *num);

void multi(int *num){
    
    int table[100][100];
    
    for(int i = 1; i <= *num; i++){
        for(int j = 1; j <= *num; j++){
            table[i][j] = i * j;
        }
    }
    
    printf("\n");
    printf("Multiplication Table\n");
    for(int i = 1; i <= *num; i++){
        for(int j = 1; j <= *num; j++){
            printf("%d\t",table[i][j]);
        }
        printf("\n");
    }
}
 
int main(){
    
    int n = 0;
    
    printf("Enter an integer: ");
    scanf("%d",&n);
    
    multi(&n);
    
    return 0;
}
