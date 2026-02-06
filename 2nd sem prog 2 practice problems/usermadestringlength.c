#include<stdio.h>

int mystrlen(char *str);

int main(){

char len[100];
int count;

count = mystrlen(len);
printf("%d",count);

return 0;
}
int mystrlen(char *str){

int count = 0;
str[100];

printf("Enter your word: ");
scanf("%s", str);

printf("Number of words: ");
while(*(str+count)!='\0'){
count++;
}

return count;
}
