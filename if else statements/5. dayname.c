#include<stdio.h>


char dayName(int dayNum){
    if (dayNum = 1)
    return 1;
    else if (dayNum = 2)
    return 2;
    else if (dayNum = 3)
    return 3;
    else if (dayNum = 4)
    return 4;
    else if (dayNum = 5)
    return 5;
    else if (dayNum = 6)
    return 6;
    else if (dayNum = 7)
    return 7;
    else if (dayNum > 7)
    return 8;
    }
    int main()
    {
        int dayNum;
        printf("Enter the numbers 1-7 for each day of the week: ");
        scanf("%d",&dayNum);
        int day = dayNum;
        if (day == 1) printf("\"M\" for Monday");
        else if (day == 2) printf("\"T\" for Tuesday");
        else if (day == 3) printf("\"W\" for Wednesday");
        else if (day == 4) printf("\"H\" for Thursday");
        else if (day == 5) printf("\"F\" for Friday");
        else if (day == 6) printf("\"S\" for Saturday");
        else if (day == 7) printf("\"U\" for Sunday");
        else if (day == 8) printf("X");
        return 0;
    }
