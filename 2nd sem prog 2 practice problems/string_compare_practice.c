#include<stdio.h>
#include<string.h>

int my_strcmp(char *str1, char *str2);

int my_strcmp(char *str1, char *str2){
   
    if(strcmp(str1,str2)==0){
        printf("Exact same words!");
    }
    else{
        printf("Two different words.");
    }
}
int main(){
   
    char word1[100];
    char word2[100];
   
    printf("Enter first word: ");
    scanf("%s", word1);
    printf("Enter second word: ");
    scanf("%s", word2);
   
    my_strcmp(word1,word2);
   
    return 0;
}
