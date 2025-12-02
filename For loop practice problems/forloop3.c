#include<stdio.h>

int main(){

    int natural, o, i;
    int sum = 0;

    printf("Enter up to what natural number: ");
    scanf("%d",&natural);

    for(o = 1; o <= natural; o++){
        printf("%d ",o);
    }
    
    for(i = 1; i < o; i++){
        sum += i;
    }
    printf("\nSum of natural numbers: %d",sum);
    
    return 0;
}