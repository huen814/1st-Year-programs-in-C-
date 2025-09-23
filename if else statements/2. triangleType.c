#include<stdio.h>

int triangleType(int a,int b,int c){
    if (a + b <= c || a + c <= b || b + c <= a )
        return 0;
    else if (a==b && b==c)
        return 1;
    else if (a==b || a==c || b==c )
        return 2;
    else
        return 3;
    }
    int main(){
    int a,b,c;
    printf("Enter three sides: ");
    scanf("%d %d %d",&a,&b,&c);
    int result = triangleType(a,b,c);
    if (result == 0) printf("Invalid");
    else if (result ==1) printf("Equilateral triangle");
    else if (result ==2) printf("Isosceles triangle");
    else (printf)("Scalene");
    return 0;
    }
