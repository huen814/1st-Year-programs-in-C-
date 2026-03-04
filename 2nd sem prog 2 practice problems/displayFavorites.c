#include<stdio.h>

void displayFavorites(char* color,char* animal,int number);

void displayFavorites(char* color,char* animal,int number){
    
    printf("Favorite Color: %s\n",color);
    printf("Favorite Animal: %s\n",animal);
    printf("Favorite Number: %d",number);
    
}

int main(){
    
    char c[50];
    char a[50];
    int n = 0;
    
    printf("Enter your favorite color: ");
    scanf(" %s", &c);
    printf("Enter your favorite animal: ");
    scanf(" %s", &a);
    printf("Enter your favorite number: ");
    scanf(" %d", &n);
    
    displayFavorites(c,a,n);
    
    return 0;
}
