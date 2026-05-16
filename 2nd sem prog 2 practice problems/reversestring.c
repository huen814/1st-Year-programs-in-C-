#include<stdio.h>
#include<string.h>

void reverseString(char *str);

void reverseString(char *str){
    
    char *start = str;
    char *end = str + strlen(str) - 1;
    char temp;
    
    while(start < end){
            
        temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
    
}

int main(){
    
    char string[100];
    
    printf("Enter a string: ");
    scanf("%[^\n]", string);
    
    reverseString(string);
    
    printf("Reversed string: %s\n",string);
    
    return 0;
}
