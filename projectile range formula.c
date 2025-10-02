#include<stdio.h>
#include<math.h>

int main(){
    int v;
    float launchAngle;
    float acceleration = 0;
    float range;

    printf("Enter the Velocity: ");
    scanf("%d",&v);
    printf("Enter the launch angle (in Radians): ");
    scanf("%f",&launchAngle);
    printf("Enter the acceleration: ");
    // acceleration must be 9.8 due to gravity
    scanf("%f",&acceleration);
        if (acceleration <= 0){
            printf("Acceleration must be in positive value");
        }
        else {
            range = (pow(v,2.0) * sin(2 * launchAngle)) / acceleration;
            printf("\n");
            printf("The range is %.2f",range);
        }
    return 0;
}
