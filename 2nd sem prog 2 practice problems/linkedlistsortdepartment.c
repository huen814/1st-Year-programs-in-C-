#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{

    char name[50];
    char program[10];
    int studentID;
    struct node *link;

};

typedef struct node Node;

Node *createnode(Node *head,char *name,char *program,int id); //ALWAYS REMEMBER TO MAKE THIS A POINTER TO TAKE STRING INPUT.
void showall(Node *head);
Node *sortdepartment(Node *head); //GETS FROM THE LIST AND COPIES TO ANOTHER LIST THOSE WHO ARE PARTS OF THE DCISM DEPARTMENT.

Node *createnode(Node *head,char *name,char *program,int id){

    Node *newnode = malloc(sizeof(Node));
    strcpy(newnode->name,name);
    strcpy(newnode->program,program);
    newnode->studentID = id;
    newnode->link = NULL; //remember to always set link to null in the new node.
    
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

    printf("---STUDENT LIST---\n");
    while(head != NULL){
    printf("Student Name: %s\n",head->name);
    printf("Program: %s\n",head->program);
    printf("Student ID: %d\n",head->studentID);
    head = head->link;
    }
    printf("\n");
}

Node *sortdepartment(Node *head){

    Node *newheadlist = NULL; //where the copied linked list will be
    Node *traverse = head; //use this to traverse for the copy list.

    printf("---STUDENTS OF DCISM--\n");
    while(traverse != NULL){ //DONT USE LINK ONLY TRAVERSE
    if(strcmp(traverse->program,"BSIT")==0 || strcmp(traverse->program,"BSCS")==0 || strcmp(traverse->program,"BSIS")==0){
        newheadlist = createnode(newheadlist,traverse->name,traverse->program,traverse->studentID);
        }
        traverse = traverse->link;
    }

    return newheadlist;
}

int main(){

    Node *head = NULL;
    Node *head2 = NULL; //copy of the original linked list

    head = createnode(head,"John","BSIT",24103877);
    head = createnode(head,"James","BSPSYCH",24412332);
    head = createnode(head,"Jane","BSCS",23122212);
    showall(head); 
    head2 = sortdepartment(head);
    showall(head2);

    return 0;
}
