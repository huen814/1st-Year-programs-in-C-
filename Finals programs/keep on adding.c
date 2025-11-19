#include<stdio.h>

    int main(){
        
            int num,sum = 0;
            
            do{
            printf("Enter a number (0 to stop): ");
                scanf("%d",&num);
                sum += num;
            } while(num > 0 || num < 0);
            
            printf("The sum is: %d",sum);
        return 0;
    }
