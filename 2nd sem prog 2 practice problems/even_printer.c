#include<stdio.h>

void even_printer(int *num);

void even_printer(int *num){
    
    int i = 1;
    
    while(i <= *num){
        if(i % 2 == 0){
            printf("%d\n",i);
        }
        i++;
    }

}
int main(){
    
    int n = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    
    even_printer(&n);
    
    return 0;
}
