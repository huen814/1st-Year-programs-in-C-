#include<stdio.h>

int main(){
    
    int num = 0;
    int limit = 0;
        
        printf("Enter size: ");
            scanf("%d",&limit);
            do{
                printf("%d ",num);
                    num++;
            } while (num < limit);
    return 0;
}
