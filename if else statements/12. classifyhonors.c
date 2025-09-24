#include<stdio.h>

int classifyHonor(float gpa){
    if (gpa >= 3.8)
    return 3;
    else if (gpa >= 3.5)
    return 2;
    else if (gpa >= 3.2)
    return 1;
    else if (gpa < 3.2)
    return 0;
}
int main(){
    float gpa, grades;
    printf("Please enter your general average to classify whether you quality for academic honors or not:\n ");
    scanf("%f",&gpa);
    grades = classifyHonor(gpa);
    if (grades == 3) printf("Summa Cum Laude");
    else if (grades ==2) printf("Magna Cum Laude");
    else if (grades ==1) printf("Cum Laude");
    else if (grades ==0) printf("No Honors");
    return 0;
}
