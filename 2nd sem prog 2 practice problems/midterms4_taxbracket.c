#include<stdio.h>
#include<stdlib.h>

//4. TAX BRACKETS

struct info{

    char firstName[50];
    char lastName[50];
    char middleInitial[1];

};

struct companyRecord{
    
    int idNumber;
    int rate;
    int hoursWorked;
    int employee_count;
    int tax_bracket;
    double net_salary;
    struct info *getInfo;
    
};

void display(struct companyRecord *record){

    double gross_salary = 0;
    double tax = 0;

    for(int i = 0; i < record->employee_count; i++){

    record[i].getInfo = malloc(sizeof(struct info));

    printf("\n===EMPLOYEE %d===\n",i + 1);
    printf("\nInput First Name: ");
    scanf(" %[^\n]", record[i].getInfo->firstName);
    printf("Input Last Name: ");
    scanf(" %[^\n]", record[i].getInfo->lastName);
    printf("Input Middle Initial: ");
    scanf(" %[^\n]", record[i].getInfo->middleInitial);
    printf("Input Id Number: ");
    scanf(" %d", &record[i].idNumber);
    printf("Input Rate: ");
    scanf(" %d", &record[i].rate);
    printf("Input Hours Worked: ");
    scanf(" %d", &record[i].hoursWorked);
    }

    gross_salary = record->rate * record->hoursWorked;

    printf("\n================\n");

    for(int i = 0; i < record->employee_count;i++){

        if(gross_salary <= 14999){
            tax = gross_salary * 0.10;
            record->net_salary = gross_salary - tax;
            printf("\n\n\n===BRACKET 1===\n");
            printf("%d - %s,%s %s --- Php %.2lf",record[i].idNumber,record[i].getInfo->lastName,record[i].getInfo->firstName,record[i].getInfo->middleInitial,record->net_salary);
        }
        else if(gross_salary <= 25999){
            tax = gross_salary * 0.15;
            record->net_salary = gross_salary - tax;
            printf("\n\n===BRACKET 2===\n");
            printf("%d - %s,%s %s --- Php %.2lf",record[i].idNumber,record[i].getInfo->lastName,record[i].getInfo->firstName,record[i].getInfo->middleInitial,record->net_salary);
        }
        else if(gross_salary >= 26000){
            tax = gross_salary * 0.20;
            record->net_salary = gross_salary - tax;
            printf("\n\n===BRACKET 3===\n");
            printf("%d - %s,%s %s --- Php %.2lf",record[i].idNumber,record[i].getInfo->lastName,record[i].getInfo->firstName,record[i].getInfo->middleInitial,record->net_salary);
        }
    }

}

int main(){

    struct companyRecord getInfo;

    printf("Input how many employees: ");
    scanf(" %d", &getInfo.employee_count);

    display(&getInfo);

    return 0;
}
