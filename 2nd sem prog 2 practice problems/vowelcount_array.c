#include<stdio.h>

void vowel_count(char *count);

void vowel_count(char *count){
    
    int word_count = 8;
    int vowel_count = 0;
    
    printf("Enter 8 characters:\n");
    
    for(int i = 0; i < word_count; i++){
        scanf(" %c",&count[i]);
        if(count[i] == 'a' || count[i] == 'e' || count[i] == 'i' || count[i] == 'o' || count[i] == 'u' || count[i] == 'A' || count[i] == 'E' || count[i] == 'I' || count[i] == 'O' || count[i] == 'U'){
            vowel_count++;
        }
    }
    
    printf("Number of vowel elements: %d",vowel_count);
    
}

int main(){
    
    char arr[8];
    
    vowel_count(&arr[0]);
    
}
