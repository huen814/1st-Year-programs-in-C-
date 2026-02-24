#include<stdio.h>

int main(){
    
    int size = 0;
    char firstChar;
    char secondChar;
    
    printf("Enter First Character: ");
    scanf(" %c", &firstChar);
    
    printf("Enter Second Character: ");
    scanf(" %c", &secondChar);
    
    printf("Enter Size: ");
    scanf("%d",&size);
    
    for(int i = 1; i <= size; i++){
        for(int d = 1; d < i; d++){
            printf("-");
        }
            if (i % 2 != 0){
            printf("%c",firstChar);
            }
            else{
            printf("%c",secondChar);
            }
    printf("\n");
}
    
    return 0;
}
