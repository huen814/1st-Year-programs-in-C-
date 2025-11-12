#include<stdio.h>

int main(){
    //PYRAMID PROGRAM USING FOR LOOP
    //      *
    //     ***
    //    *****
    //   *******
    int i,j,row;
    
    printf("Enter number of rows for pyramid: ");
    scanf("%d",&row);
    //counts number of rows
    for(i = 1; i <= row; i++){
        for(j = i; j < row; j++){
        printf(" ");
    }
    for(j = 1; j <= (2 * i - 1); j++){
        printf("*");
    }
    printf("\n");
}
return 0;
}
