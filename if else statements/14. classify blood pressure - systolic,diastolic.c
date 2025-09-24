#include<stdio.h>

int classifyBP(int systolic, int diastolic){
    if (systolic < 120 && diastolic < 80)
    return 1;
    else if (systolic >= 120 && systolic <= 129 || diastolic < 80)
    return 2;
    else if (systolic >= 130 && systolic <= 139 || diastolic >= 80 && diastolic <=89)
    return 3;
    else if (systolic >= 140 && diastolic >= 90)
    return 4;
}
int main()
{
    int systolic,diastolic;
    int classification;
    printf("Enter the patient's systolic and diastolic blood pressure for classification: ");
    scanf("%d %d",&systolic,&diastolic);
    classification = classifyBP(systolic,diastolic);
    if (classification == 1) printf("Normal blood pressure");
    else if (classification == 2) printf("Elevated");
    else if (classification == 3) printf("Hypertension stage 1");
    else if (classification == 4) printf("Hypertension stage 2");
    return 0;
}
