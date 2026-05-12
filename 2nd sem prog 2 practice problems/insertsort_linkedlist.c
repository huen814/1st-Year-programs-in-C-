#include<stdio.h>
#include<stdlib.h>

struct node{

    int value;
    struct node *link;

};
typedef struct node Node;

Node *insertsort(Node *head,int val);
void showall(Node *head);

Node *insertsort(Node *head,int val){

    Node *newnode = malloc(sizeof(Node));
    newnode->value = val;
    newnode->link = NULL;

    if(head == NULL){
        return newnode;
    }

    if(val < head->value){
        newnode->link = head; //HEAD BECOMES THE NEXT NODE
        return newnode; 
    }
    //int count = 0;

    Node *temp = head;

    while(temp->link != NULL && temp->link->value < val){ //DONT NAME IT NEW NODE BECAUSE NEW NODES THE LAST PART
        temp = temp->link;
        //count++;
    }

    newnode->link = temp->link;
    temp->link = newnode;

    return head;
}

void showall(Node *head){

    if(head == NULL){
        printf("Nothing to show...\n");
    }

    while(head != NULL){
        printf("%d ",head->value);
        head = head->link;
    }
    printf("\n");
}

int main(){

    Node *head = NULL;
    int option = 0;
    int value = 0;
    int location = 0;

    do{

        printf("---LINKED LIST SORT---\n");
        printf("1. Insert(Program will Sort It)\n");
        printf("2. Show All\n");
        printf("3. Exit\n");
        printf("Option: ");
        scanf("%d", &option);

        switch(option){
            case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            head = insertsort(head,value);
            break;
            case 2:
            showall(head);
            break;
        }

   }while(option != 3);
    
}
