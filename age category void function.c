#include<stdio.h>

void ageCategory(int age){
    
    if (age > 0 && age <= 12){
        printf("Child");
    }
    else if (age >= 13 && age <= 17){
        printf("Teenager");
    }
    else if (age >= 18 && age <= 59){
        printf("Adult");
    }
    else if (age >= 60 && age <= 99){
        printf("Senior citizen");
    }
    else{
        printf("Invalid age");
    }
}
int main(){
    
    int age;
    
    printf("Enter the age: ");
        scanf("%d",&age);
        
    ageCategory(age);
    
    return 0;
}
