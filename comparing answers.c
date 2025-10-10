#include<stdio.h>

int main(){
    
    char answer;
    
    printf("Enter your answer for number 10: ");
        scanf("%c",&answer);
        if (answer != 'A' && answer != 'B' && answer != 'C' && answer != 'D' && answer != 'E'){
        printf("Invalid letter(must be in capital)");
            }
        else{
        printf("Oh, my answer is %c as well",answer);
        }
    return 0;
}
