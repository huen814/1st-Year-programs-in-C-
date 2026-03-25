#include<stdio.h>

struct student{

    char first_name[30];
    char last_name[30];
    int grade;
    float gwa;

};

struct student *getHonorList(struct student *records, int *honorCount,int totalStudents){


    printf("Input number of students: ");
    scanf(" %d", &totalStudents);

    for(int i = 0; i < totalStudents; i++){

        records[i].gwa = 0;

        printf("\n===Student %d===\n",i + 1);
        printf("Input First Name:");
        scanf(" %[^\n]",records[i].first_name);
        printf("Input Last Name:");
        scanf(" %[^\n]",records[i].last_name);
        printf("Input GWA: ");
        scanf(" %f",&records[i].gwa);
    }

    printf("\nHonor List:\n");
    for(int i = 0; i < totalStudents; i++){
        if(records[i].gwa <= 1.75){
            printf("Name: %s %s-- GWA: %.2f\n",records[i].first_name,records[i].last_name,records[i].gwa);
            (*honorCount)++;
        }
    }

        if(*honorCount == 0){
        printf("Currently no honor students found..");
    }

}

int main(){

    struct student getInfo;
    int number_of_students = 0;
    int honor = 0;

    getHonorList(&getInfo,&honor,number_of_students);

    return 0;
}
