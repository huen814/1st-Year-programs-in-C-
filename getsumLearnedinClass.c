#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int getSum(int,int);

int main(){
    int x,y,result;
    printf("10 + 2 = %d\n",getSum(10,2));//passing all integer values
    
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
    
    result = getSum(x,y);
    
    printf("SUM: %d\n",result);
    printf("SUM: %d\n",getSum(x,y));
    
    return 0;
}
int getSum(int x,int y){
    int result;
    result = x + y;
    return result;
}