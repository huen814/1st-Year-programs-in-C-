#include<stdio.h>
#include<string.h>

void book_rec(int *age,char *genre);

void book_rec(int *age,char *genre){
    
    printf("Enter your age: ");
    scanf("%d", age);
    
    if(age <= 0){
        printf("Please enter a valid age.");
    }
    
    printf("Enter your genre preference (a for adventure, m for mystery, f for fantasy, s for science fiction): ");
    scanf("%s", genre);
    
}
int main(){
    
    int a = 0;
    char g[2];
    
    book_rec(&a,g);
    
    if(a >= 8){
        if(strcmp(g,"a")==0){
            printf("The Adventures of Tom Sawyer");
        }
        else if(strcmp(g,"m")==0){
            printf("Nancy Drew: The Secret of the Old Clock");
        }
    }
    
    if(a >= 13){
        if(strcmp(g,"f")==0){
            printf("Harry Potter and the Sorcerer's Stone");
        }   
        else if(strcmp(g,"s")==0){
            printf("Ender's Game");
        }
    }
    
    if(a < 8){
        printf("No recommendation available");    
    }
    
    return 0;
}
