#include<stdio.h>

int terrifiedby7(int);

int main(){

    int num;

    printf("Input number: ");
    scanf("%d",&num);

    terrifiedby7(num);

    return 0;
}
int terrifiedby7(int number){

    int i;
    int booCount = 0;
    for(i = 1; i <= number; i++){
        if(i % 7 == 0){
            printf("Boo!");
            booCount++;
            if(booCount == 5){
                printf("\n\n\nI cant continue counting, Im too scared!");
                break;
            }
        }
        else{
            printf("%d",i);
        }
        if(i == number){
            printf("\n\n\nI made it!");
        }
        printf("\n");
    }
    return number;
}
