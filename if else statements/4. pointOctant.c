#include<stdio.h>


int pointOctant(int x,int y,int z){
    if (x >= 0 && y>= 0 && z >= 0)
    return 1;
    else if (x < 0 && y >= 0 && z >= 0)
    return 2;
    else if (x < 0 && y < 0 && z >= 0)
    return 3;
    else if (x >= 0 && y < 0 && x >= 0)
    return 4;
    else if (x >= 0 && y >= 0 && z < 0)
    return 5;
    else if (x < 0 && y >= 0 && z < 0)
    return 6;
    else if (x < 0 && y < 0 && z < 0)
    return 7;
    else if (x >= 0 && y < 0 && z < 0)
    return 8;
}
int main()
{
    int x,y,z;
    printf("Enter your coordinates: ");
    scanf("%d %d %d",&x,&y,&z);
    int octant = pointOctant(x,y,z);
    printf("The point %d %d %d is in the %d octant",x,y,z,octant);
    return 0;
}