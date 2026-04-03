#include<stdio.h>

struct stack{

    char arr[10];
    int top;
    int size;

} createStack;

int push(struct stack *push,char value);
char pop(struct stack *push);
char peek(struct stack *peek);
void showall(struct stack *showall);

int push(struct stack *push,char value){
    if(push->top == push->size - 1){
        printf("Stack Overflow, cannot push!");
        return 0;
    }
    else{
        push->top++;
        push->arr[push->top] = value;
        printf("Pushed: %c\n",value);
        return 1;
    }
}

char pop(struct stack *pop){
    if(pop->top == -1){
        printf("No elements to pop!\n");
        return '\0';
    }
    else{
       return pop->arr[pop->top--]; 
    }
}

char peek(struct stack *peek){
    if(peek->top == -1){
        printf("No elements!");
        return '\0';
    }
    else{
        return peek->arr[peek->top];
    }
}

void showall(struct stack *showall){

    printf("All Elements:\n");
    for(int i = showall->top; i>=0; i--){
        printf("%c", showall->arr[i]);
    }
    printf("\n");
}

int main(){

    int choice = 0;
    char val;
    struct stack createStack = {" ",-1,10};

do{ 
    printf("\nEnter your choice:\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Show\n");
    printf("5. Exit\n");
    scanf(" %d", &choice);

    switch(choice){
        case 1:
        printf("Enter value: ");
        scanf(" %c", &val);
        push(&createStack,val);
        break;
        case 2:
        val = pop(&createStack);
        if(val != '\0'){
            printf("Removed Top Element: %c\n",val);
        }
        break;
        case 3:
        val = peek(&createStack);
        if(val == '\0'){
            printf("No elements to peek.");
        }
        else{
            printf("Top Element: %c\n",val);
        }
        break; 
        case 4:
        showall(&createStack);
        break;
    }
}while(choice != 5);

    return 0;
}
