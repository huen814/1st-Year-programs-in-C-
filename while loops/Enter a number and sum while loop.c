#include<stdio.h>

int main(){

int number,sum=0;

    printf("Enter a number: ");
while (scanf("%d",&number) > 0 && number > 0 )
{
    printf("Enter a number: ");
    sum += number;
}
printf("Total sum: %d",sum);

return 0;
}
