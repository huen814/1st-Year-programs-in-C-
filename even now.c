#include<stdio.h>

int main(){
    
    int n1 = 0;
    int n2 = 0;
    
        printf("Enter value of n1: ");
            scanf("%d",&n1);
        printf("Enter value of n2: ");
            scanf("%d",&n2);
            
        do{
            if (n2 % 2 == 0){
                printf("%d ",n2);
                }
            n2--;
        } while (n1 < n2);
    return 0;
}
