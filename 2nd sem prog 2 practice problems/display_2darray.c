#include<stdio.h>

void displaytwod(int num[3][3]);

int main(){
   
    int array[3][3]={ {1,2,3},
                    {4,5,6},
                    {7,8,9}
                    };
   
    displaytwod(array);
   
   
    return 0;
}
void displaytwod(int num[3][3]){

    printf("%d ",num[0][0]);
    printf("%d ",num[0][1]);
    printf("%d \n",num[0][2]);
    printf("%d ",num[0][3]);
    printf("%d ",num[0][4]);
    printf("%d \n",num[0][5]);
    printf("%d ",num[0][6]);
    printf("%d ",num[0][7]);
    printf("%d ",num[0][8]);
   
}
