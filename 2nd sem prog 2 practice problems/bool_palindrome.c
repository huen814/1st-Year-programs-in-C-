#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isPalindrome(char string[100]);

bool isPalindrome(char string[100]){
    
    int length = strlen(string);
    int middle = length / 2;
    
    for(int i = 0; i < middle; i++){
        if(string[i] != string[length - i - 1]){
        return false;
        }
    }
    return true;
}
int main(){
    
    char word[100];

    do{
        printf("Enter a word: ");
        scanf("%s", word);
        if(isPalindrome(word)){
            printf("Palindrome found!");
            break;
        } 
    } while(true);
    
    
    return 0;
}
