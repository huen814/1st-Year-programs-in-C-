#include<stdio.h>

int logicGate(char gate, int a, int b){

    switch (gate) {
    case 'A':
    return (a & b);
    break;
    case 'O':
    return (a | b);
    break;
    case 'X':
    return (a ^ b);
    break;
    case 'N':
    return !(a & b);
    break;
    default:
    printf("Invalid gate type");
    return -1;
    }
}
    int main() {
        char gate;
        int a,b,result;

        printf("Enter gate type: A for AND, O FOR OR, X FOR XOR, N FOR AND:");
        scanf("%c",&gate);
        printf("Enter input 0 or 1(a): ");
        scanf("%d",&a);
        printf("Enter input 0 or 1(b): ");
        scanf("%d",&b);
        result = logicGate(gate,a,b);
        if (result !=-1){
        printf("Result: %d",result);
        }
        return 0;
    }

