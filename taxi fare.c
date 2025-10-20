#include<stdio.h>

int main(){
    
    int distance,bookingCost,extraDistance,bonus = 0;
    
    printf("Input distance travelled by driver: ");
        scanf("%d",&distance);
        
        if (distance <= 5){
            bookingCost = 80;
        }
        else if (distance >= 6 && distance <= 10 ){
            bookingCost = 80 + 20 * (distance - 5);
        }
        else if (distance > 10) {
            bookingCost = 80 + 20 * 5 + 25 * (distance - 10);
        }
        if (distance > 20){
            extraDistance = distance + 20;
            bonus = (extraDistance / 5 * 10);
            bookingCost += bonus;
        }
    printf("The booking cost was: Php %d",bookingCost);
return 0;
} 
