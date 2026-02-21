#include<stdio.h>

void oh_baby_a_triple(int *num);

void oh_baby_a_triple(int *num){
    
    int i = 3;
    int count = 1;
    
    do{
    printf("%d\n",i);
    i+=3;
    count++;
    }while(count <= *num);
    
}

int main(){
    
    int n = 0;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    oh_baby_a_triple(&n);
    
    return 0;
}
