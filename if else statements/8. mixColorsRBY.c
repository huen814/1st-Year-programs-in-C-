#include<stdio.h>
#include<string.h>

int mixColors(char color1,char color2){
    char red = 'R';
    char blue = 'B';
    char yellow = 'Y';
    if (color1 == red  && color2 == blue || color1 == blue && color2 == red)
    return 1;
    else if (color1 == red && color2 == yellow || color1 == yellow && color2 == red)
    return 2;
    else if (color1 == blue && color2 == yellow || color1 == yellow && color2 == blue)
    return 3;
    else if (color1 == color2)
    return 4;
    else
    return 0;
}
int main(){
    char color1,color2,R,B,Y;
    printf("Pick your color combination out of these three colors: R = RED B = BLUE Y = YELLOW\n");
    scanf(" %c + %c",&color1,&color2);
    char combination = color1 + color2;
    combination = mixColors(color1,color2);
    if (combination == 1) printf("Purple");
    else if (combination == 2) printf("Orange");
    else if (combination == 3) printf("Green");
    else if (combination == 4) printf("Same color");
    else if (combination == 0) printf("Invalid combination");
return 0;
}
