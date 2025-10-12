#include<stdio.h>

void greetname(char name[100]);
// only one line of character can be entered
int main(){
    
    char name[100];
        
        printf("Guest's name: ");
        
            scanf("%s", name);
            
        printf("Welcome to the club, %s!\n",name);
        return 0;
}
void greetname(char name[100]){
}
