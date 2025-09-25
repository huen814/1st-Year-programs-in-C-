#include<stdio.h>

int academicStanding(int unitsPassed, int totalUnits){
    int standing = (unitsPassed * 100) / totalUnits;
    if (standing >= 90)
    return 2;
    else if (standing >= 70 && standing <= 90)
    return 1;
    else if (standing< 70)
    return 0;
    }
    // units entered must be below 30
    int main(){
    int unitsPassed, totalUnits, standing;
    printf("Enter your total units and units passed to determine your academic standing");
    printf("\nTotal units: ");
    scanf("%d",&totalUnits);
    printf("Enter your units passed: ");
    scanf("%d",&unitsPassed);
    standing = academicStanding(unitsPassed, totalUnits);
    if (standing == 2) printf("Regular");
    if (standing == 1) printf("Probationary");
    if (standing == 0) printf("Dismissed");
    return 0;
    }
