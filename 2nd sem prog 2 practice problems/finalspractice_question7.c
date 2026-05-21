#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{

    char meal[30];
    struct node *link;

};
typedef struct node Node;

Node *createnode(Node *head,char *meal);
void showall(Node *head);
Node *checkrecipe(Node *head);

Node *createnode(Node *head,char *meal){

    Node *newnode = malloc(sizeof(Node));
    strcpy(newnode->meal,meal);
    newnode->link = NULL;

    if(head == NULL){
        return newnode;
    }

    Node *traverse = head;
    while(traverse->link != NULL){
        traverse = traverse->link;
    }

    traverse->link = newnode;

    return head;
}

void showall(Node *head){

    if(head == NULL){
        printf("Nothing to print...\n");
        return head;
    }

    printf("Recipes:\n");
    while(head != NULL){
        printf("Recipe: %s\n",head->meal);
        head = head->link;
    }

}

Node *checkrecipe(Node *head){

    char recipe[30];

    printf("\nEnter the name of the recipe you want to want to check: ");
    scanf(" %[^\n]", recipe);

    Node *traverse = head;
    while(traverse != NULL){
    if(strcmp(traverse->meal,recipe)==0){
        if(strcmp(traverse->meal,"Pancakes")==0){
            printf("Ingredient: Flour, Quantity: 1\n"); 
            printf("Ingredient: Milk, Quantity: 1\n"); 
            printf("Ingredient: Eggs, Quantity: 2\n"); 
            printf("Ingredient: Baking Powder, Quantity: 1\n"); 
            printf("Ingredient: Salt, Quantity: 1\n"); 
            printf("You do not have enough ingredients to make this recipe.");
        }
        else if(strcmp(traverse->meal,"Chocolate Chip Cookies")==0){
            printf("Recipe: Chocolate Chip Cookies\nIngredient: Flour, Quantity: 2\nIngredient: Sugar, Quantity: 1\nIngredient: Butter, Quantity: 1\nIngredient: Eggs, Quantity: 1\nIngredient: Chocolate Chips, Quantity: 2\n");
            printf("You have all the necessary ingredients to make this recipe.");
        }
        else if(strcmp(traverse->meal,"Scrambled Eggs")==0){
            printf("No ingredients yet for this recipe.");
        }
        else if(strcmp(traverse->meal,"Vanilla Cake")==0){
            printf("No ingredients yet for this recipe.");
        }
        else if(strcmp(traverse->meal,"Butter Cookies")==0){
            printf("Ingredient: Flour, Quantity: 2\nIngredient: Sugar, Quantity: 1\nIngredient: Butter, Quantity: 2\nIngredient: Eggs, Quantity: 1\n"); 
            printf("You have all the necessary ingredients to make this recipe. ");
        }
    }
        traverse = traverse->link;
    }

    return head;
}

int main(){

    Node *head = NULL;

    head = createnode(head,"Pancakes");
    head = createnode(head,"Chocolate Chip Cookies");
    head = createnode(head,"Scrambled Eggs");
    head = createnode(head,"Vanilla Cake");
    head = createnode(head,"Butter Cookies");
    showall(head);
    checkrecipe(head);

    return 0;
}

