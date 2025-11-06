#include<stdio.h>
//Simple Calculator using For and If Else
//purpose of program is to get a number from the user, and another number to ask until where it ends.
//took a break from practicing programming due to a typhoon in our area.

int main(){
    int n1,n2;
    char arithOp;
    
    do{
        printf("<||| SIMPLE CALCULATOR |||>");
        printf("\nEnter number: ");
            scanf("%d",&n1);
        printf("Enter until what number: ");
            scanf("%d",&n2);
        printf("\n");
        printf("\nEnter 0 to end program.");
        printf("\nADDITION (+)");
        printf("\nSUBTRACTION (-)");
        printf("\nDIVISION (/)");
        printf("\nMULTIPLICATION (*)");
        printf("\nEnter arithmetic operator symbol: ");
            scanf(" %c",&arithOp);
        printf("\n");
        
        if (arithOp == '+'){
            for(int i = 0; i < n2; i++ ){
                printf("%d + %d = %d\n",n1,i + 1,n1 + i + 1);
            } 
        }
        else if (arithOp == '-'){
            for(int i = 0; i < n2; i++){
                printf("%d - %d = %d\n\n",n1,i,n1 - i);
            }
        }
        else if (arithOp == '/'){
            for(int i = 1; i <= n2; i++){
                printf("%d / %d = %.2f\n\n",n1,i, (float)n1 / i);
            }
        }
        else if (arithOp == '*'){
            for(int i = 0; i < n2; i++){
                printf("%d * %d = %.2f\n\n",n1,i, (float)n1 * i);
            }
        }
        else{
            if (arithOp != '0'){
            printf("Enter a valid operator.\n\n");
            }
        }
    }while (arithOp != '0');
        
return 0;
}
        
    
        
