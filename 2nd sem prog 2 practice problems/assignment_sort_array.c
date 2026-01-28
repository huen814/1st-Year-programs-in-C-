#include<stdio.h>

void variables(int *x,int *y,int *z);
void sort(int m,int n,int l);

int main(){

    int i = 0,j = 0,k = 0;

    variables(&i,&j,&k);
    sort(i,j,k);

    return 0;
}
void variables(int *x,int *y,int *z){

    printf("Enter 3 numbers:\n");
    printf("Number 1: ");
    scanf("%d",x);
    printf("Number 2: ");
    scanf("%d",y);
    printf("Number 3: ");
    scanf("%d",z);

}
void sort(int x,int y,int z){

    if(x > y){
        int temp = x;
        x = y;
        y = temp;
    }
    if(x > z){
        int temp = x;
        x = z;
        z = temp;
    }
    if(y > z){
        int temp = y;
        y = z;
        z = temp;
    }

    printf("Your numbers are now sorted ascendingly: %d %d %d",x,y,z);

}
