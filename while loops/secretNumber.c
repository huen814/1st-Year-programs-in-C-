#include<stdio.h>

int main(){
// SIX SEVENNNNNNNNNNN
int secretNumber = 67;
int guess;

printf("Guess the number: ");
while (scanf("%d",&guess)==1){
        if (guess == secretNumber){
            printf("You guessed the right number!");
        }
        else if (guess > secretNumber) {
            printf("Too high! Try again.");
        }
        else {
            printf("Too low! Try again.");
        }
    return 0;
}
}
