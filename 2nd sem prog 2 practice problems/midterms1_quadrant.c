#include<stdio.h>

struct coordinates{

    int x;
    int y;

};

int createPoint(struct coordinates *get);
int displayPoint(int quadrant, struct coordinates *print);

int createPoint(struct coordinates *get){
    
    printf("Enter x - coordinate: ");
    scanf(" %d", &get->x);
    printf("Enter y - coordinate: ");
    scanf(" %d", &get->y);

    if(get->x == 0 && get->y == 0){
        return 0;
    }
    else if(get->x > 0 && get->y > 0){
        return 1;
    }
    else if(get->x < 0 && get->y > 0){
        return 2;
    }
    else if(get->x < 0 && get->y < 0){
        return 3;
    }
    else if(get->x > 0 && get->y < 0){
        return 4;
    }
    else if(get->x > 0 || get->y == 0){
        return 5;
    }
    else if(get->x == 0 || get->y > 0){
        return 6;
    }
}

int displayPoint(int quadrant,struct coordinates *print){


    if(quadrant == 0){
        printf("The point (%d, %d) is in Origin.",print->x,print->y);
    }
    else if(quadrant == 1){
        printf("The point (%d, %d) is in Quadrant 1.",print->x,print->y);
    }
    else if(quadrant == 2){
        printf("The point (%d, %d) is in Quadrant 2.",print->x,print->y);

    }
    else if(quadrant == 3){
        printf("The point (%d, %d) is in Quadrant 3.",print->x,print->y);
    }
    else if(quadrant == 4){
        printf("The point (%d, %d) is in Quadrant 4.",print->x,print->y);
    }
    else if(quadrant == 5){
        printf("The point (%d, %d) is in x-axis.",print->x,print->y);
    }
    else if(quadrant == 6){
        printf("The point (%d, %d) is in y-axis.",print->x,print->y);
    }
}

int main(){

    struct coordinates coords;

    int quadrant = createPoint(&coords);
    displayPoint(quadrant,&coords);

    return 0;
}
