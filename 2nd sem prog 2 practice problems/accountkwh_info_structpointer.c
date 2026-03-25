#include<stdio.h>
#include<stdlib.h>

struct account{

    char name[100];
    int account_number;


};

struct kilowatt{

    int kwh;
    struct account *info;
    int households;

};

void display(struct kilowatt *billRecord);

void display(struct kilowatt *billRecord){

    double units_consumed = 0;

    for(int i = 0; i < billRecord->households; i++){
        billRecord[i].info = malloc(sizeof (struct account));
        printf("\n===HOUSEHOLD %d===\n",i + 1);
        printf("Input Account Name: ");
        scanf(" %[^\n]", billRecord[i].info->name);
        printf("Input Account Number: ");
        scanf(" %d", &billRecord[i].info->account_number);
        printf("Input kWh Consumed: ");
        scanf("%d", &billRecord[i].kwh);
        }

        if(billRecord->kwh <= 100){
            units_consumed = (billRecord->kwh * 8.00);
        }
        else if(billRecord->kwh <= 300){
            units_consumed = (billRecord->kwh * 10.50);
        }
        else if(billRecord->kwh >= 301){
            units_consumed = (billRecord->kwh * 13.75);
        }

    for(int i = 0; i < billRecord->households; i++){
        printf("\n===============\n");
        printf("===BRACKET %d===\n",i + 1);
        printf("%d - %s --- Php %.2lf\n",billRecord[i].info->account_number,billRecord[i].info->name,units_consumed);
    }
}

int main(){

    struct kilowatt getInfo;

    printf("Input number of households: ");
    scanf(" %d",&getInfo.households);

    display(&getInfo);

    return 0;
}
