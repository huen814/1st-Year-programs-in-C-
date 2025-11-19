#include<stdio.h>

void drivers_license(int age, char license_driver);

int main(){
    int age_of_driver;
    char license;
    
    printf("Enter your age: ");
    scanf("%d",&age_of_driver);
    printf("Do you have a driver's license? (Y/N): ");
    scanf(" %c",license);
    
    drivers_license(age_of_driver,license);
    
    return 0;
}
void drivers_license(int age, char license_driver){
    
    if(age >= 18 || license_driver == 'Y'){
        printf("You can drive.");
    }
    else if(age < 18 || license_driver == 'N'){
        printf("You cannot drive.");
    }
    else if(age >= 18 || license_driver == 'N'){
        printf("You cannot drive.");
    }
    else{
        printf("You cannot drive.");
    }
}
