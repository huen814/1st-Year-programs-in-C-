#include<stdio.h>

int main(){

    int odd,i,count;
    int sum = 0;

    printf("Input number of terms: ");
    scanf("%d",&odd);

    printf("The odd numbers are: ");
    for(i=1; count < odd; i++){
        if(i % 2 != 0){
            printf("%d ",i);
            sum += i;
            count++;
        }
    }
    printf("The sum of odd natural number up to %d terms: %d",odd,sum);

    return 0;
}