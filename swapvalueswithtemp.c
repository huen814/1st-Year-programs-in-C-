#include<stdio.h>

int main(){
int a;
int b;
int temp;
printf("a = ");
scanf("%d",&a);
printf("b = ");
scanf("%d",&b);
temp = a;
a = b;
b = temp;
printf("a is %d b is %d",a,b);

return 0;
}
