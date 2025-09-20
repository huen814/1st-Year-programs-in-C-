#include<stdio.h>

int main() {
    int num,row;
    printf("Enter the number you want to generate a multiplication table for: ");
    scanf("%d",&num);
    printf("Enter how many rows you want in the table: ");
    scanf("%d",&row);
    for (int i = 1; i <=row ; i++)
    {
    printf("%d x %d = %d\n",num,i,num * i);
    }
    return 0;
}
