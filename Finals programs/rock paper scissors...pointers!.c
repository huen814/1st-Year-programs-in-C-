#include<stdio.h>

void batobatopick(int *pick,int *pick2){
    // 2 players will choose what to draw
    // i still am not good with pointers.
        printf("Choose your draw Player 1!");
        printf("\n[1] Rock");
        printf("\n[2] Paper");
        printf("\n[3] Scissors");
        printf("\nYour Draw: ");
            scanf("%d",pick);    
        
        printf("\n");
        printf("Choose your draw Player 2!");
        printf("\n[1] Rock");
        printf("\n[2] Paper");
        printf("\n[3] Scissors");
        printf("\nYour Draw: ");
            scanf("%d",pick2);    
        
}
int main(){
    
    int pick,pick2;
    
    batobatopick(&pick,&pick2);
        
        if (pick == pick2){
            printf("\nIt's a tie.");
        }
        else if(pick == 2 && pick2 == 1 || pick == 1 && pick2 == 3 || pick == 3 && pick2 == 2){
            printf("\nPlayer 1 Wins.");
        } 
        else {
            printf("\nPlayer 2 Wins.");
        }
        
    return 0;
}
