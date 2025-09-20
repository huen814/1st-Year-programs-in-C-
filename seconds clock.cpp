#include<stdio.h>

int main(){
    int howManySeconds;
    int hour;
    int mins;
    int seconds;
    printf("Enter the time (seconds): ");
    scanf("%d",&howManySeconds);
    
        hour = howManySeconds / 3600;
        mins = (howManySeconds - hour * 3600) / 60;
        seconds = (howManySeconds - hour * 3600) % 60;
    printf("%d hr ",hour);
    printf("%d min ", mins);
    printf("%d sec ", seconds);
    return 0;
}
