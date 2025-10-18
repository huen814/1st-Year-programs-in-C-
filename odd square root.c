#include<stdio.h>
#include<math.h>

int main(){
    int num,i;
    double square_root;

    printf("Only shows square of odd numbers from 1 to 20\n");
    printf("Enter number: ");
    scanf("%d",&num);

    for(i = 1;i <= num && i <=20;i++){
        if (i % 2 != 0){
        square_root = sqrt(i);
        printf("%d = %.2lf\n", i, square_root);
        }
    }
    return 0;
}

