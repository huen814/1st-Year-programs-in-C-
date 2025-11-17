#include <stdio.h>

void drawDiamond(int row);

int main() {
    int size;
    printf("Enter the length size of the diamond: ");
    scanf("%d", &size);
    
    drawDiamond(size);
    
    return 0;
}
void drawDiamond(int row){
    
    for(int i = 1; i <= row; i++){
        for(int j = i; j < row; j++){
            printf(" ");
    }
    for(int j = 0; j < 2 * i - 1; j++){
        printf("*");
    }
    printf("\n");
    }
    for(int i = row - 1; i >= 1; i--){
        for(int j = row; j > i; j--){
            printf(" ");
        }
    for(int j =1; j <= 2 * i - 1; j++){
        printf("*");
    }
    printf("\n");
    }
}
