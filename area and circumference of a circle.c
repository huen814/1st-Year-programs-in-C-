// Header file declaration
#include<stdio.h>

// Main function
int main() {
    // Variable declarations
    int radius;
    float circumference, area;

    // Insert printf and scanf statements here...
    printf("Enter the length of the radius: ");
    scanf("%d",&radius);
    // Insert if statement to check for errors...
    if (radius <=0){
    printf("Invalid value, Please enter a different radius length.");
    }
    else{
    // Insert calculations here...
    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;
    // Insert printf statements here...
    printf("The circumference of the circle is %.2f",circumference);
    printf("\nThe area of the circle is %.2f",area);
    }
    return 0;
}
