#include<stdio.h>

int main(){

    int i,n,j,cnt = 0;
    int a[100];

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d",&i);
    
    printf("Input %d elements in the array\n",i);

    for(n = 0; n < i; n++){
        printf("element - %d : ",n);
        scanf("%d",&a[n]);
    }

    for(n = 0; n < i; n++){
        for(j = n + 1; j < i; j++){
                if(a[n] == a[j]){ // if j which is equal to n + 1, is equivalent to array n then it will increment and count it as a duplicate
                    cnt++;
                    break;
                }
            }
        }

        printf("The total number of duplicate elements found in the array is: %d",cnt);


    return 0;

}
