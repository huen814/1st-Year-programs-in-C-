#include<stdio.h>

int leapYear(int year){
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        printf("%d is a leap year.",year);
    }
    else{
        printf("not a leap year.");
}
}
int main(){
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    leapYear(year);
    return 0;
}
