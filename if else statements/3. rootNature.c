#include<stdio.h>

int rootNature(int a, int b, int c, int D){
    if (D > 0)
    return 1;
    else if (D==0)
    return 2;
    else if (D < 0)
    return 3;
}
    int main(){
        int a,b,c;
        printf("Enter your values: ");
        scanf("%d %d %d",&a,&b,&c);
        int result = b * b - 4 * a * c;
        if (result == 1) printf("Real and Quadrant");
        else if (result == 2) printf("Real and Equal");
        else if (result < 0) printf("Complex");
        return 0;
    }