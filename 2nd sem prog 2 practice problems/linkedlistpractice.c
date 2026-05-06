#include<stdio.h>
#include<stdlib.h>

struct node{

    int value;
    struct node *link;

};
typedef struct node Node;

Node *insertbeginning(Node *head,int val); //function needs to be a pointer to return the address inside the node.
Node *insertend(Node *head,int val);
Node *insertmiddle(Node *head,int val,int location);
void printall(Node *head);

Node *insertbeginning(Node *head,int val){

    Node *newNode = malloc(sizeof(Node));
    newNode->value = val;
    newNode->link = head;

    return newNode;
}

Node *insertend(Node *head,int val){

    Node *newNode = malloc(sizeof(Node));
    newNode->value = val;
    newNode->link = NULL;

    Node *traverse = head;
    if(traverse == NULL){
        return newNode;
    }

    while(traverse->link != NULL){
        traverse = traverse->link;
    }

    traverse->link = newNode;

    return head;
}

Node *insertmiddle(Node *head,int val,int location){

    Node *newNode = malloc(sizeof(Node));
    newNode->value = val;
    newNode->link = NULL;

    Node *traverse = head;
    if(traverse == NULL){
        return newNode;
    }

    int count = 0;

    while(traverse->link != NULL && count < location - 1){
        traverse = traverse->link;
        count++;
    }

    newNode->link = traverse->link; //the link of the newmode replaces what should have been the link to the 300.
    traverse->link = newNode; //the newnode now traverses to 300 because the new node is before it

    return head; //ALWAYS RETURN HEAD IF ITS NOT INSERTING AT THE BEGINNING
}

void printall(Node *head){

    Node *traverse = head;

    while(traverse != NULL){
        printf("%d\n",traverse->value);
        traverse = traverse->link;
    }
}

int main(){

    Node *headbeginning = NULL;
    Node *headend = NULL;
    Node *headmiddle = NULL;

    headbeginning = insertbeginning(headbeginning,100);
    headbeginning = insertbeginning(headbeginning,200);
    headbeginning = insertbeginning(headbeginning,300);
    printall(headbeginning);
    
    printf("\n");

    headend = insertend(headend,100);
    headend = insertend(headend,200);
    headend = insertend(headend,300);
    printall(headend);

    printf("\n");
    
    headmiddle = insertend(headmiddle,100); 
    headmiddle = insertend(headmiddle,200);
    headmiddle = insertend(headmiddle,300);
    headmiddle = insertmiddle(headmiddle,600,2);
    printall(headmiddle);


    return 0;
}
