#include<stdio.h>


// may the programming geniuses look down upon me because I did not know what I was doing here, I used AI to assist me in making this i'm screwed.

void parkingSystem(int timeInH, int timeInM, int timeoutH, int timeoutM, char* vehicle, double amountPaid);
int main(){
    int timeInH,timeInM,timeoutH,timeoutM;
    double amountPaid;
    char vehicle[100];

    printf("Enter vehicle: ");
    scanf("%s",vehicle);

    printf("Enter time in: 0-23 hours , 0-59 minutes\n");
        scanf("%d %d",&timeInH,&timeInM);
        if (timeInH < 0 || timeInH > 23 || timeInM < 0 || timeInM > 59 ){
            printf("Invalid time.\n");
            return 1;
            }
    printf("Enter time out: 0-23 hours , 0-59 minutes\n");
        scanf("%d %d",&timeoutH,&timeoutM);
        if  (timeoutH < 0 || timeoutH > 23 || timeoutM < 0 || timeoutM > 59 ){
            printf("Invalid time.\n");
            return 1;
            }
    printf("Enter amount paid: \n");
    scanf("%lf",&amountPaid);

     parkingSystem(timeInH,timeInM,timeoutH,timeoutM,vehicle,amountPaid);

     return 0;
     } // call function from here
void parkingSystem(int timeInH, int timeInM, int timeoutH, int timeoutM, char* vehicle, double amountPaid){
    double totalAmount, change;
    // here is the total amount after getting change
    char* meridian;
    // for time in and out

    int inMinutes = timeInH * 60 + timeInM;
    int outMinutes = timeoutH * 60 + timeoutM;
    int durationMins = outMinutes - inMinutes;
    int durationHours = durationMins / 60;
    int durationMinutes = durationMins % 60;
    double totalHours = durationMins / 60.0;
    // for total time

    //meridian
    if (timeInH < 12)
        meridian = 'AM';
    else
        meridian = 'PM';

    if (totalHours <3)
        totalAmount = 20.0;
    else
        totalAmount = 20.0 + (totalHours -3) * 2.5;

    printf("XYZ Parking\n");
    printf("Time In: %d : %d\n",timeInH,timeInM);
    printf("Time Out: %d : %d\n",timeoutH,timeoutM);
    printf("Total Time: %d : %d\n",durationHours,durationMinutes);
    printf("Vehicle: %s\n",vehicle);
    printf("First 3 hours(20 pesos): Php 20.00\n");
    if (totalHours >3)
        printf("Succeeding hours(2.5 pesos/hour): Php %.2f\n",(totalHours - 3) * 2.5);
    printf("Total Amount Due: Php %.2lf\n",totalAmount);
    printf("Amount Paid: Php %.2lf\n",amountPaid);

    if (amountPaid < totalAmount)
        printf("Insufficient amount.\n");
    else {
        change = amountPaid - totalAmount;
        printf("Change: Php %.2f\n",change);
    }
}

