#include<stdio.h>
// vowelchecker using void function 
void vowelChecker(char vowel);

int main(){
    char vowel;
    
    printf("Enter the letter: ");
    scanf("%c", &vowel);
    
    vowelChecker(vowel);
    
    return 0;
}
void vowelChecker(char vowel){
    if (vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u'){
        printf("vowel");
    }
    else {
        printf("consonant");
    }
}
