#include<stdio.h>

int sum;

void add(int *n1, int *n2);

void add(int *n1, int *n2){
   
    sum = *n1 + *n2;
   
}
int main(){
   
    int num1 = 15;
    int num2 = 15;
   
    add(&num1,&num2);

    printf("%d + %d = %d",num1,num2,sum);
   
    return 0;
}
