#include<stdio.h>

int main(){
    int progAge;
    int teacherAge;
    int peterAge;
    int oldmanAge;
    printf("Enter age of The Programmer: ");
    scanf("%d", &progAge);
    printf("Enter age of his teacher: ");
    scanf("%d", &teacherAge);
    printf("Enter age of his friend, Peter: ");
    scanf("%d", &peterAge);
    oldmanAge = progAge + teacherAge - peterAge;
    printf("The age of the old man is %d",oldmanAge);

    return 0;
}
