#include<stdio.h>

void dayIdentifier(int *day);

int main(){
    
    int identify = 0;
    
    dayIdentifier(&identify);
    
    if(identify == 1){
        printf("Monday");
    }
    else if(identify == 2){
        printf("Tuesday");
    }
    else if(identify == 3){
        printf("Wednesday");
    }
    else if(identify == 4){
        printf("Thursday");
    }
    else if(identify == 5){
        printf("Friday");
    }
    else if(identify == 6){
        printf("Saturday");
    }
    else if(identify == 7){
        printf("Sunday");
    }
    else{
        printf("Invalid input");
    }
    
    return 0;
}
void dayIdentifier(int *day){
    
    printf("Enter day: ");
    scanf("%d", day);
    
}
