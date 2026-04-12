#include<stdio.h>

struct list{

    int value;
    int numOfElements;
    int size;
    int array[20];

};

int insertBeginning(struct list *x, int location);
int insertlocation(struct list *x, int location);
int insertEnd(struct list *x);
int deleteBeginning(struct list *x, int location);
int deleteLocation(struct list *x, int location);
int deleteEnd(struct list *x, int location);
void showall(struct list *x);

int insertBeginning(struct list *x, int location){
    if(x->size > location){
        for(int i = x->numOfElements; i > 0; i--){
            x->array[i] = x->array[i - 1];
        }
        x->array[0] = x->value;
        return 1;
    }
    else {
        return 0;
    }
}

int insertlocation(struct list *x, int location){

    if(x->numOfElements < x-> size && location < x->numOfElements && location > 0){ 
        for(int i = x->numOfElements; i > location; i--){ // decrements until it reaches targets location 
            x->array[i] = x->array[i - 1];
        }
        x->array[location] = x->value;
        return 1;
    }
    else{
        return 0;
    }
}

int insertEnd(struct list *x){
    if(x->numOfElements < x->size){
        x->array[x->numOfElements] = x->value;
        return 1;
    }
    else{
        return 0;
    }
}

int deleteBeginning(struct list *x, int location){
    if(x->array[x->numOfElements] == 0){
        printf("No elements to delete.");
    } 
    else{
        if(x->size > location){
            for(int i = 0; i < x->numOfElements - 1; i++){
                x->array[i] = x->array[i + 1];
            }
                return 1;
            }
            else{
                return 0;
            }
        }
}

int deleteLocation(struct list *x, int location){
    if(x->numOfElements == 0){
        printf("No elements to delete");
    }
    else if(location >= x->numOfElements || location <= 0){
        printf("Invalid location");
    }

    for(int i = location; location < x->numOfElements - 1; i--){
        x->array[i - 1] = x->array[i + 1]; 
    }
}

int deleteEnd(struct list *x, int location){

    if(x->numOfElements < x->size){
        x->array[x->numOfElements - 1] = x->array[x->numOfElements];
    }
    
}

void showall(struct list *x){
    
    for(int i = 0; i < x->numOfElements; i++){
        printf(" %d",x->array[i]);
    }
}
int main(){

    struct list getList = {0,0,20};
    int option = 0;
    int insertLocation = 0;

    do{
        printf("MENU:\n");
        printf("Enter a choice:\n");
        printf("1. Insert Beginning\n");
        printf("2. Insert Location\n");
        printf("3. Insert End\n");
        printf("4. Delete Beginning\n");
        printf("5. Delete Location\n");
        printf("6. Delete End\n");
        printf("7. Show All\n");
        printf("8. Exit\n");
        printf("Option: ");
        scanf("%d", &option);

        switch(option){
            case 1:
            printf("\nEnter value to be inserted: ");
            scanf(" %d", &getList.value);
            getList.numOfElements++;
            insertBeginning(&getList,insertLocation);
            break;
            case 2:
            printf("\nEnter value to be inserted: ");
            scanf(" %d", &getList.value);
            printf("Enter location be inserted: ");
            scanf(" %d", &insertLocation);
            getList.numOfElements++;
            insertlocation(&getList,insertLocation);
            printf("\n");
            break;
            case 3:
            printf("\nEnter value to be inserted: ");
            scanf(" %d", &getList.value);
            insertEnd(&getList);
            getList.numOfElements++;
            printf("\n");
            break;
            case 4:
            deleteBeginning(&getList,insertLocation);
            getList.numOfElements--;
            printf("\n");
            break;
            case 5:
            printf("Enter location to be deleted: ");
            scanf("%d", &insertLocation);
            deleteLocation(&getList,insertLocation);
            getList.numOfElements--;
            printf("\n");
            break;
            case 6:
            deleteEnd(&getList,insertLocation);
            getList.numOfElements--;
            printf("\n");
            break;
            case 7:
            if((getList.numOfElements) > 0){
                printf("Elements: ");
                showall(&getList);
                printf("\n");
            }
            else{
                printf("No elements to show.\n");
            }
            break;
        }
    }while(option != 8);

}
