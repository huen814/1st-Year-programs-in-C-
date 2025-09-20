#include<stdio.h>

int main(){
    char word;
    printf("Enter a letter: ");
    scanf("%c",&word);

    (word =='a') || (word =='e') || (word=='i') || (word=='o') || (word=='u') || (word =='A') || (word =='E') || (word=='I') || (word=='O') || (word=='U') ? printf("Vowel") : printf("Consonant");


    return 0;
}
