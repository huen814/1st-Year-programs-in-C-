#include<stdio.h>

void reversed(int *size);

void reversed(int *size){
    
    int i,j;
    
    for(int i = 1; i <= *size; i++){
        for(int j = 1; j <= *size - i; j++){
            printf(" ");
        }
        for(int pattern = 1; pattern <= i; pattern++){
        printf("%d",i);
        }
        printf("\n");
    }
    
}

int main(){
    
    int s = 0;
    
    printf("Enter a number: ");
    scanf("%d",&s);
    
    reversed(&s);
    
    return 0;
}
