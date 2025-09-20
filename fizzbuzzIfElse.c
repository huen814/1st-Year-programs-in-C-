#include<stdio.h>

int main(){
int num;
printf("Enter a number: ");
scanf("%d",&num);
if (num %2 == 0 ||  num %5 == 0) {
printf("FIZZBUZZ");
} else if (num % 2 == 0) {
printf("FIZZ");
} else if (num % 5 == 0) {
printf("BUZZ");
}
return 0;
}








