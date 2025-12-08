#include<stdio.h>

int main(){

    int num,number,i,count,plus;
    int count2=0;
    int count5=0;

    printf("Input count: ");
    scanf("%d",&num);
    for(i = 1; i <= num; i++){
        printf("Input number %d: ",i);
        scanf("%d",&number);
        count++;
        if(number % 2 == 0)
        count2++;
        if(number % 5 == 0)
        count5++;
        }

    printf("\n\n2: ");
    for(i = 0; i < count2; i++){
        printf("=");
    }
    printf("\n\n5: ");
    for(i = 0; i < count5; i++){
        printf("=");
    }

    return 0;
}
