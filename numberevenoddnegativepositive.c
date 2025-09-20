#include<stdio.h>

int main(){
    int num;
    
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("%d is your number.\n",num);
   // odd or even
    if (num %2 == 0) {
        printf("%d is even.\n",num);
    } else if (num %1 == 0) {
        printf("%d is odd.\n",num);
    }
    if (num >= 0) {
        printf("%d is positive.\n",num);
    } else if (num <= 0) {
        printf("%d is negative.\n",num);
    }
    return 0;
}