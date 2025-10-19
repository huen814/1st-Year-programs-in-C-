#include<stdio.h>
#include<string.h>

int main(){
    
    int rn=0,num;
    
    printf("Enter a number: ");
        scanf("%d",&num);
        
    while(num > 0){
        rn = (rn * 10)+num % 10;
        num = num / 10;
    }
        printf("%d",rn);
return 0;
}
