#include<stdio.h>

int main(){
    
    int row;
    // INVERTED ROW
    printf("Enter number of rows: ");
    scanf("%d",&row);
    
    for(int i=0; i<row;i++){
    for(int j=0; j<row - i; j++){
    printf("*");
}
printf("\n");
}
return 0;
}
