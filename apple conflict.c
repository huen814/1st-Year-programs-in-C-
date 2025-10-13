#include<stdio.h>

void appleConflict(int apple){
    
    if (apple >= 10){
        printf("No way, that's too much");
    }
    else if (apple <= 5){
        printf("No, ask for more");
    }
    else{
        printf("Okay, sure");
    }
}
int main(){
    
    int apple;
    
    printf("Enter the number of apples: ");
    scanf("%d",&apple);
    
    appleConflict(apple);
    
    return 0;
}
