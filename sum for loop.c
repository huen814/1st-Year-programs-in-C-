#include<stdio.h>

int sum(int n1,int n2);

    int main(){
        int n1,n2,answer;
        
        printf("Enter first number: ");
            scanf("%d",&n1);
        printf("Enter second number: ");
            scanf("%d",&n2);
            
        answer = sum(n1,n2);
        
        return 0;
    }
    int sum(int n1,int n2){
        int answer = 0;
            for (answer = 0; answer < n1 && n2; answer++){
                answer = n1 + n2;
                printf("%d",answer);
            }
    }
