#include<stdio.h>


void capricornsNow(int *month,int *day);

int main(){
    
    int mnth = 0;
    int dy = 0;
    
    capricornsNow(&mnth,&dy);
    
    if(mnth == 1 && dy >= 20 || mnth == 2 && dy <= 18){
            printf("Your zodiac sign is Aquarius.");
    }
    else if(mnth == 2 >= 19 || mnth == 3 && dy <= 20){
            printf("Your zodiac sign is Pisces.");
    }
    else if(mnth == 3 && dy >= 21 || mnth == 4 && dy <= 19){
            printf("Your zodiac sign is Aries.");
    }
    else if(mnth == 4 && dy >= 20 || mnth == 5 && dy <= 20){
            printf("Your zodiac sign is Taurus.");
    }
    else if(mnth == 5 && dy >= 21 || mnth == 6 && dy <= 21){
            printf("Your zodiac sign is Gemini.");
    }
    else if(mnth == 6 && dy >= 22 || mnth == 7 && dy <= 22){
            printf("Your zodiac sign is Cancer.");
    }
    else if(mnth == 7 && dy >= 23 || mnth == 8 && dy <= 22){
            printf("Your zodiac sign is Leo.");
    }
    else if(mnth == 8 && dy >= 23 || mnth == 9 && dy <= 22){
            printf("Your zodiac sign is Virgo.");
    }
    else if(mnth == 9 && dy >= 23 || mnth == 10 && dy <= 23){
            printf("Your zodiac sign is Libra.");
    }
    else if(mnth == 10 && dy >= 24 || mnth == 11 && dy <= 21){
            printf("Your zodiac sign is Scorpius.");
    }
    else if(mnth == 11 && dy >= 22 || mnth == 12 && dy <= 21){
            printf("Your zodiac sign is Sagittarius.");
    }
    else if(mnth == 12 && dy >= 22 || mnth == 1 && dy <= 19){
            printf("Your zodiac sign is Capricorn.");
    }
    
    return 0;
}
void capricornsNow(int *month,int *day){
    
    printf("Enter your birth month: ");
    scanf("%d", month);
    printf("Enter your birth day: ");
    scanf("%d", day);
    
}
