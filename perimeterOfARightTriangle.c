#include<stdio.h>
#include<math.h>

int main(){
float base,height,hypotenuse,perimeter;
printf("Type base here: ");
scanf("%f",&base);
printf("Type height here: ");
scanf("%f",&height);
hypotenuse = sqrt(base * base + height * height);
perimeter = base + height + hypotenuse;
printf("The hypotenuse is %.2f\n",hypotenuse);
printf("The perimeter of the right angle is %.2f",perimeter);

return 0;
}
