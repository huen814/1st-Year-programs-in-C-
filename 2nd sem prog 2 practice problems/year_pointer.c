include<stdio.h>

void what_year(int *year);

int main(){
    
    int y = 0;
    
    what_year(&y);
    
    if(y % 100 == 0 && y % 400 == 0){
        printf("It's a leap century year.");
    }
    else if(y % 100 == 0){
        printf("It's a century year.");
    }
    else if(y % 4 == 0){
        printf("It's a leap year.");
    }
    else{
        printf("It's neither a leap year nor a century year.");
    }
    
    return 0;
}
void what_year(int *year){
    
    printf("Enter a year: ");
    scanf("%d", year);
    
    
}
