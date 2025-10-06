#include<stdio.h>

int babyAge(int programmer, int teacher, int peter);

int main(){
    int programmer, teacher, peter, baby;
        
        printf("Enter The Programmer's age: ");
            scanf("%d",&programmer);
        printf("Enter the teacher's age: ");
            scanf("%d",&teacher);
        printf("Enter Peter's age: ");
            scanf("%d",&peter);
        
        baby = babyAge(programmer,teacher,peter);
        printf("Baby's age = %d",baby);
    return 0;
}
int babyAge(int programmer, int teacher, int peter){
    int baby;
    return baby = programmer * teacher / peter + 1;
}
