#include<stdio.h>
// didnt meet the required output but still produces a tower. :D (ugh)
int main(){
    
    int i,j,height,width;
    
    printf("Enter width of skyscraper: ");
        scanf("%d",&width);
    printf("Enter height of skyscraper: ");
        scanf("%d",&height);
    
    int mid = width / 2;
    
    for(i=0;i < height;i++){
        if (i == 0){
            for(j=0;j < mid + 1;j++){
            printf(" ");
        }
        printf("*\n");
    } else {
        printf(" ");
        for(j = 0;j < width;j++){
            printf("*");
        }
        printf("\n");
        }
    }
  //printf(" ");
  for(j = 0; j < width + 2; j++){
    printf("*");
  }
  printf("\n");
return 0;
}
