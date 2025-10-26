#include<stdio.h>

// haven't figured out yet how to make this program run in a loop due to string in line 40 switch having a string.

void studentName(){
    
    printf("// STUDENT GRADE AND INFORMATION MANAGER //");
    printf("\n1. Input student name: ");
        
}
void studentGrade(){
    
    printf("\n2. Input student grade: ");

}
void displayInfo(){
    
    printf("\n3. Input student information: ");
    
}

void exitProgram(){
    
    
    printf("\n4. Exit");
    
}
void choice(int enterChoice){
    
    char enterName[100];
    int enterGrade;
    //information//
    int height, weight;
    char nationality[100];
    
    printf("\nEnter your choice: ");
        scanf("%d",&enterChoice);
        if (enterChoice > 5 || enterChoice < 1){
            printf("Invalid choice.");
        }
    switch(enterChoice){
        case 1: 
        printf("Enter student name: ");
            scanf("%s",enterName);
        break;
        case 2:
        printf("Enter student grade (0-100): ");
            scanf("%d",&enterGrade);
                if (enterGrade < 0 && enterGrade > 100){
                    printf("Invalid grade.");
                }
                                    //100 - 90 = A
                                    //89 - 85 = B
                                    //84 - 80 = C
                                    //79 - 76 = D
                                    //75 and below = F
                if (enterGrade == 100 && enterGrade >= 90){
                    printf("Grade is A.");
                }
                else if (enterGrade <= 89 && enterGrade >= 85){
                    printf("Grade is B.");
                }
                else if (enterGrade <= 84 && enterGrade >= 80){
                    printf("Grade is C.");
                }
                else if (enterGrade <= 79 && enterGrade >= 76){
                    printf("Grade is D.");
                }
                else if (enterGrade <= 75){
                    printf("Grade is F.");
                }
        break;
        case 3:
        printf("Enter student information: ");
        printf("\nEnter height in cm: ");
            scanf("%d",&height);
        printf("Enter weight in kg: ");
            scanf("%d",&weight);
        printf("Enter Nationality: ");
            scanf("%s",nationality);
        printf("\nSTUDENT INFORMATION: ");
        printf("\nHeight: %d cm",height);
        printf("\nWeight: %d kg",weight);
        printf("\nNationality: %s",nationality);
        break;
        case 4:
        printf("Exiting program. Goodbye!\n\n");
    }
}
int main(){
    
    int enterChoice;
        
    studentName();
    studentGrade();
    displayInfo();
    exitProgram();
    choice(enterChoice);
    
    return 0;
}