#include <stdio.h>

void drawIsosceles(int n);

int main() {
    int height;   
    
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);
    if(height <=0) {
        printf("Error: Please enter a positive integer.");
    }
    drawIsosceles(height);
    
    return 0;
}

void drawIsosceles(int n) {
    
    int i,j,space;
    
    i = 1;
   while(i <= n){
       space = 1;
        while(space <= n - i){
            printf(" ");
        space++;
   }
   
   j = 1;
   while(j <= 2 * i - 1){
       printf("*");
       j++;
   }
       printf("\n");
       i++;
   }
}
