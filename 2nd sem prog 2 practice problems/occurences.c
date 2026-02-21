#include<stdio.h>

int main(){
    
    char input[100];
    int count_a = 0;
    int count_b = 0;
    int i;
    
    printf("Enter a string: ");
    scanf("%s", input);
    
    for(i = 0; input[i] != '\0'; i++){
        if(input[i] == 'a'){
            count_a++;
        }
        else if(input[i] =='b'){
            count_b++;
        }
    }
    
    printf("Number of 'a' occurrences: %d\n", count_a);
    printf("Number of 'b' occurrences: %d",count_b);
    
    return 0;
}
