#include<stdio.h>

void day_of_the_week(int *day);

int main(){
   
    int d = 0;
   
    printf("Enter a number between 1 and 7: ");
    scanf(" %d",&d);
   
    day_of_the_week(&d);
   
    return 0;
}
void day_of_the_week(int *day){
   
    switch(*day){
    case 1:
    printf("Monday");
    break;
    case 2:
    printf("Tuesday");
    break;
    case 3:
    printf("Wednesday");
    break;
    case 4:
    printf("Thursday");
    break;
    case 5:
    printf("Friday");
    break;
    case 6:
    printf("Saturday");
    break;
    case 7:
    printf("Sunday");
    break;
    default:
    printf("Invalid input.");
    }
   
}
