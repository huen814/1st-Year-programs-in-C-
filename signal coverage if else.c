#include<stdio.h>
#include<math.h>

void distance(float x2,float x1,float y2,float y1,float firstRadius,float secondRadius);
    
    int main(){
        
        float x2,x1,y2,y1,firstRadius,secondRadius;
        
        printf("Enter the x, y of the first circle: ");
            scanf("%f %f",&x1,&y1);
        printf("Enter the radius of the first circle: ");
            scanf("%f",&firstRadius);
        printf("Enter the x, y of the second circle: ");
            scanf("%f %f",&x2,&y2);
        printf("Enter the radius of the second circle: ");
            scanf("%f",&secondRadius);
        
        distance(x2,x1,y2,y1,firstRadius,secondRadius);
        
        return 0;
    }
    void distance(float x2,float x1,float y2,float y1,float firstRadius,float secondRadius){
    float d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    float radiusDifference = firstRadius - secondRadius;
    float radiusSum = firstRadius + secondRadius;
        if (d == 0 && firstRadius == secondRadius){
            printf("YES");
        }
        else if (d > radiusDifference && d < radiusSum) {
            printf("YES");
        }
        else if (d == radiusDifference && d == radiusSum) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
