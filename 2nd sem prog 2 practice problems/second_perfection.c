#include<stdio.h>

int isSquare = 0;
int isCube = 0;

void second_perfection(int *num);

void second_perfection(int *num){
    
    
    for(int i = 0; i * i <= *num; i++){
        if(i * i == *num){
            isSquare = 1;
            break;
        } 
    }
    
    for(int i = 0; i * i * i <= *num; i++){
        if(i * i * i == *num){
            isCube = 1;
            break;
        }
    }
    
}
int main(){
    
    int n = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    second_perfection(&n);
    
    if(isSquare && isCube){
        printf("Perfect in every way");
    } 
    else if(isCube && n % 2 == 0){
        printf("Perfect in even cubes");
    } 
    else if(isCube && n % 2 != 0){
        printf("Perfect in an odd way");
    }
    else{
        printf("Nothing special");
    }
    
    return 0;
}
