#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int getHours(int time1);
int getMinutes(int time1);
void displayTime(int time1);

int main(){
    int time1;

    printf("Enter time: ");
    scanf("%d",&time1);

    displayTime(time1);

    return 0;
}
int getHours(int time1){
    return time1 / 100;
}
int getMinutes(int time1){
    return time1 % 100;
}
void displayTime(int time1){
    int hours = getHours(time1);
    if (hours < 0 || hours > 23) {
        printf("Invalid time :");
    }
    int minutes = getMinutes(time1);
    if (hours < 0 || hours > 59) {
        printf("Invalid time");
    }
    else {
        printf("%d : %d",hours,minutes);
    }
}
