#include<stdio.h>

int classifyTemp(float tempC){
    if (tempC < 35.0)
    return 1;
    else if (tempC < 35.0 && tempC <= 37.5)
    return 2;
    else if (tempC > 37.5 && tempC <= 39.0)
    return 3;
    else if (tempC > 39.0)
    return 4;
    }
//
int main(){
    float tempC;
    int classification;
    printf("Enter patient's body temperature: ");
    scanf("%f",&tempC);
    classification = classifyTemp(tempC);
    if (classification == 1) printf("Hypothermia");
    else if ( classification== 2) printf("Normal");
    else if (classification == 3) printf("Fever");
    else if(classification == 4) printf("High fever");
    return 0;
}

