#include<stdio.h>

void square_num(int *num);

void square_num(int *num){
    
    int i = 1;
    int square;

    while(i <= *num){
    square = i * i;
    printf("%d\n",square);
    i++;
    }
}
int main(){
    
    int n = 0;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    square_num(&n);
    
    return 0;
}
