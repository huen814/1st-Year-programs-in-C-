#include<stdio.h>

int identifyPoint(int x, int y);

int main(){
    
    int x,y;
    int pointoforigin;
    
    printf("Enter x - coordinate: ");
        scanf("%d",&x);
    printf("Enter y- coordinate: ");
        scanf("%d",&y);
        
    pointoforigin = identifyPoint(x,y);
    
    if (pointoforigin == 1){
        printf("The point (%d,%d) is in Quadrant 1.",x,y);
    }
    else if (pointoforigin == 2){
        printf("The point (%d,%d) is in Quadrant 2.",x,y);
    }
    else if (pointoforigin == 3){
        printf("The point (%d,%d) is in Quadrant 3.",x,y);
    }
    else if (pointoforigin == 4){
        printf("The point (%d,%d) is in Quadrant 4.",x,y);
    }
    else if (pointoforigin == 5){
        printf("The point (%d,%d) is in the x - axis.",x,y);
    }
    else if (pointoforigin == 6){
        printf("The point (%d,%d) is in the y - axis.",x,y);
    }
    else if (pointoforigin == 7){
        printf("The point (%d,%d) is in Origin.",x,y);
    }
    
return 0;
}
int identifyPoint(int x,int y){
    
    int pointoforigin;
    
    if (x > 0 && y > 0){
        //quadrant 1;
        return 1;
    }
    else if (x < 0 && y > 0){
        //quadrant 2;
        return 2;
    }
    else if (x < 0 && y < 0 ){
        //quadrant 3;
        return 3;
    }
    else if (x > 0 && y < 0){
        //quadrant 4;
        return 4;
    }
    else if (x != 0 && y == 0){
        //X;
        return 5;
    }
    else if (y != 0 && x == 0){
        //Y;
        return 6;
    }
    else if (x == 0 && y == 0){
        //origin;
        return 7;
    }
    return pointoforigin;
}
