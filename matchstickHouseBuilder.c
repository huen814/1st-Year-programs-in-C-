#include<stdio.h>

void getMatchSticksNeeded(int houses);
int main()
{
    int houses, matchsticks;
    printf("Enter the number of houses to make: ");
    scanf("%d",&houses);
    matchsticks = 5 * houses + 1;
    printf("Number of matchsticks needed: %d",matchsticks);
    return 0;
}
void getMatchSticksNeeded(int houses){
    int matchsticks;
    matchsticks = 5 * houses + 1;
    return matchsticks;
}
