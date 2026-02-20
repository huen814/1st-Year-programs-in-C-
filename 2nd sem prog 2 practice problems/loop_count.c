#include<stdio.h>

void loop_count(int *n);

void loop_count(int *n){

    int i = 1;
    
    while(i <= *n){
    printf("%d\n",i);
    i++;
    }

}
int main(){
    
    int number = 0;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    loop_count(&number);
    
    return 0;
}
