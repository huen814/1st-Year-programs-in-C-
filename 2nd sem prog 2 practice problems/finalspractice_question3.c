#include<stdio.h>
#include<stdlib.h>

//WHY ARE THEY MULTIPLYING?! 
//Create a program that will ask the user for a number of nodes to be 
//added to the linked list. Populate these nodes first. After the 
//linked list has been properly populated, modify it in such a way 
//that you insert a new node in between all the nodes in the linked 
//list effectively doubling the size of the linked list. 
//The values to insert in between the nodes will be determined if the 
//PREVIOUS NODE is EVEN or ODD 
//If the previous node is EVEN the value of the node to be inserted 
//will be DOUBLE the previous value 
//If the previous node is ODD the value of the node to be inserted 
//will be +1 of the previous value

//Test Case 1 
//Enter the number of nodes: 6 
//Enter the values for the nodes: 
//6 
//5 
//4 
//3 
//2 
//1 
//Original list: 
//6 -> 5 -> 4 -> 3 -> 2 -> 1 -> NULL 
//Modified list: 
//6 -> 12 -> 5 -> 6 -> 4 -> 8 -> 3 -> 4 -> 2 -> 4 -> 1 -> 2 -> NULL

struct node{

    int value;
    struct node *link;

};
typedef struct node Node;

Node *getnodes(Node *head,int *n);
void display(Node *head);

Node *getnodes(Node *head,int *n){

    printf("Enter the number of nodes: ");
    scanf("%d",n);

    printf("Enter the value of the nodes:\n");
    for(int i = 0; i < *n; i++){
        Node *newnode = malloc(sizeof(Node));
        scanf("%d", &newnode->value);
        newnode->link = NULL;

        if(head == NULL){ 
        head = newnode;
        }
        else{

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

    Node *temp = head;

    printf("Original list:\n");
    while(temp != NULL){
       printf("%d -> ", temp->value);
        temp = temp->link;
    }
    printf("NULL\n");

    Node *temp2 = head;

    printf("Modified list:\n");
    while(temp2 != NULL){

        Node *newnode = malloc(sizeof(Node));

        if(temp2->value % 2 == 0){
            newnode->value = temp2->value * 2;
        } 
        else{
            newnode->value = temp2->value + 1;
        }
    
        newnode->link = temp2->link;
        temp2->link = newnode;
        printf("%d -> ",temp2->value);
        printf("%d -> ",newnode->value);
        temp2 = temp2->link->link; //moves from the value it just checked to the next one.
    }

    printf("NULL\n");
}   


int main(){

    Node *head = NULL;
    int amount_nodes = 0;
    
    head = getnodes(head,&amount_nodes);
    display(head);


    return 0;
}
