#include<stdio.h>

void even_skip(int *limit);

void even_skip(int *limit){
    
    
    for(int i = 0; i <= *limit; i++){
        if(i == 10){
        continue;
        }
        if(i % 2 == 0){
        printf("%d ",i);
        i++;
        }
    }
    
}

int main(){
    
    int n = 0;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    even_skip(&n);
    
    return 0;
}
