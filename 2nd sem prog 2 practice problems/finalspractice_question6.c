#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{

    char name[20];
    int yearlevel;
    int units;
    struct node *link;

};
typedef struct node Node;

Node *createnode(Node *head,char *name,int year,int units);
void showall(Node *head);
Node *studentlist(Node *head);

Node *createnode(Node *head,char *name,int year,int units){

    Node *newnode = malloc(sizeof(Node));
    strcpy(newnode->name,name);
    newnode->yearlevel = year;
    newnode->units = units;
    newnode->link = NULL;

    Node *traverse = head;
    if(traverse == NULL){
        return newnode;
    }

    while(traverse->link != NULL){
        traverse = traverse->link;
    }

    traverse->link = newnode;

    return head;
}

void showall(Node *head){

    if(head == NULL){
        printf("NO STUDENTS TO LIST...\n");
    }
    else{
        printf("===FULL STUDENT LIST===\n");
        printf("%-20s%-15s%-10s\n","STUDENT NAME","YEAR LEVEL","UNITS");
        while(head != NULL){
            printf("%-20s",head->name);
            printf("%-20d", head->yearlevel);
            printf("%-20d\n",head->units);
            head = head->link;
        }
    }
    printf("\n\n");
}

Node *studentlist(Node *head){

    Node *newhead = NULL; //DONT FORGET TO ALWAYS MAKE IT NULL.
    Node *traverse = head;
    int yearleveloption = 0;
    
    printf("Enter year level: ");
    scanf("%d", &yearleveloption);

    while(traverse != NULL){
    if(traverse->yearlevel == yearleveloption && traverse->units <= 47){
    newhead = createnode(newhead,traverse->name,traverse->yearlevel,traverse->units);
    }
    else if(traverse->yearlevel == yearleveloption && traverse->units <= 95){
    newhead = createnode(newhead,traverse->name,traverse->yearlevel,traverse->units);
    }
    else if(traverse->yearlevel == yearleveloption && traverse->units > 95){
    newhead = createnode(newhead,traverse->name,traverse->yearlevel,traverse->units);
    }
    traverse = traverse->link;   
    }
    printf("\n\n");
    return newhead;
}

int main(){

    Node *head = NULL;
    Node *head2 = NULL;

    head = createnode(head,"Catharine",1,28);
    head = createnode(head,"Maymie",1,29);
    head = createnode(head,"Jody",1,24);
    head = createnode(head,"Connely",2,48);
    head = createnode(head,"Schimmel",2,62);
    head = createnode(head,"Vladimir",2,72);
    head = createnode(head,"Lilla",2,95);
    head = createnode(head,"Emmanuelle",3,96);
    head = createnode(head,"Letha",3,143);
    head = createnode(head,"Anya",3,140);
    head = createnode(head,"Rod",3,142);
    showall(head);
    head2 = studentlist(head);
    showall(head2);

    return 0;
}
