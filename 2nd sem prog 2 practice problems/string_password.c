#include<stdio.h>
#include<string.h>

int main(){
    
    char password[20];
    int attempts = 3;
    
    do{
        printf("Enter the password: ");
        scanf("%s", password);
        if(strcmp(password,"secret")==0){
            printf("Access granted!");
            break;
        }
        else{
            attempts--; 
            printf("Access denied! %d attempts remaining.\n",attempts);
        }
        if(attempts == 0){
            printf("Access denied!");
            break;
        }
    } while (strcmp(password,"secret") != 0);
    
return 0;
}
