#include<stdio.h>

int main(){

int password;
const int correctPassword = 1234;

do {
    printf("Enter password: ");
    scanf("%d",&password);
    if (password == correctPassword){
    printf("Correct password. Access granted!");
    } else {
    printf("Incorrect password. Try again.\n");
    }
} while (password != correctPassword);
return 0;
}
