#include<stdio.h>
#include<stdlib.h>

//1. Oh no the data is corrupted! 
//Create a program that asks for user input for the size of your linked 
//list. Afterwards, populate that linked list with values, and filter 
//it into a new Node called cleanedList which contains the values that 
//are not enclosed by -1. If data has been cleaned, display Data has 
//been recovered! Otherwise, display “Oh no Data is fully corrupted and 
//cannot be recovered!” then terminate the program. 
//Full Credit is given if you can successfully make these 3 functions. - Node* listCleaning(); - void getInput(); - void display();

struct node{

    int value;
    struct node *link;

};
typedef struct node Node;

void getInput(int *size);
Node *listCleaning(Node *head,int size);
void display(Node *head);

void getInput(int *size){

    printf("Input how many items in the linked list: ");
    scanf("%d", size);

}

Node *listCleaning(Node *head,int size){

    printf("Input Linked List Values: ");
    for(int i = 0; i < size; i++){
        Node *newnode = malloc(sizeof(Node));
        scanf("%d", &newnode->value);
        newnode->link = NULL;

        if(head == NULL){
            head = newnode;
        }
        else{ //always to remember to put else statement when using a for loop for linked list.
        Node *temp = head;

        while(temp->link != NULL){
            temp = temp->link;
        }
        temp->link = newnode;
        }
    }

    return head;
}

void display(Node *head){

    int determine = 0;
    int found = 0;
    int print = 0;

    Node *temp = head; //always remember to make a temporary pointer for head to traverse for it.

    while(temp != NULL){ 
        if(temp->value == -1){
        determine = !determine; //flips it. works like boolean
        }
        else if(determine == 0){ 
            found = 1; //flag if theres anything found. used for printing.
        }
        temp = temp->link;
    }
    
    if(found){
        printf("Data has been recovered!\n");
        printf("Cleaned Data: ");
    }
    else{
        printf("Oh no Data is fully corrupted and cannot be recovered!");
    }

    //SECOND LOOP TO PRINT THE VALUES THAT AREN'T ENCLOSED BY -1.

    determine = 0; //set determine to 0 again for the second loop.
    while(head != NULL){ //we can finally use head here.
        if(head->value == -1){
            determine = !determine;
        }
        else if(determine == 0){
            printf("%d ",head->value);
        }
        head = head->link;
    }

}

int main(){

    Node *head = NULL;
    int n = 0;

    getInput(&n);
    head = listCleaning(head,n);
    display(head);

    return 0;
}
