#include<stdio.h>

int main(){
//HH MM M
int hour;
int minutes;
int displayHour;

     printf("Enter hour(0-23): ");
     scanf("%d", &hour);
     if (hour < 0 || hour > 23 ){
            printf("Please input a valid time");
            return 1;
     }
     printf("Enter minutes(0-59): ");
     scanf("%d", &minutes);
if (minutes < 0 || minutes > 59){
    printf("Please input a valid time");
    return 1;
}
     char *meridian = (hour > 12) ? "PM" : "AM";
     int displayhour = ( hour % 12 == 0) ? 12 : hour % 12;
     printf("Time : %02d : %02d %s", hour,minutes,meridian);

     return 0;
     }
