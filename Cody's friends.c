#include<stdio.h>

int main(){
    // cody's friends
    // must be even
    // cody wants to know the height of his 5 friends, all height are even numbers.
    int n1,n2,n3,n4,n5;
    
    printf("Enter first number: ");
        scanf("%d",&n1);
            if (n1 % 1 == 0){
    printf("Only even numbers.");
        return 0;
    }
    printf("Enter second number: ");
        scanf("%d",&n2);
    printf("Enter third number: ");
        scanf("%d",&n3);
    printf("Enter fourth number: ");
        scanf("%d",&n4);
    printf("Enter fifth number: ");
        scanf("%d",&n5);
    
    printf("Inputted numbers: %d,%d,%d,%d,%d",n1,n2,n3,n4,n5);
    return 0;
}
