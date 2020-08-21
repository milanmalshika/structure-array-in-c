#include<stdio.h>
#include<string.h>

struct item{
	int index;
	char itemCode[8];
	char title[20];
	int unit;
	char measureOfUnit[10];
	float unitPrice;
	float stock;
}itm[25];


void displayDetails(struct item it){
	if(it.index<10){
		printf("ITEM40%d\t\t%d%s\t%.2f\t%.2f\t%s\n", it.index, it.unit, it.measureOfUnit, it.unitPrice, it.stock, it.title);
	}
	else{
		printf("ITEM4%d\t\t%d%s\t%.2f\t%.2f\t%s\n", it.index, it.unit, it.measureOfUnit, it.unitPrice, it.stock, it.title);
	}
}


void insertItem(struct item itm[25]){
    int n=0,j;
    if(n<=25){
        for(j=1; j<25; j++){
            if(itm[j].index == NULL){
                itm[j].index = j;

                printf("Title = ");
                scanf("%s", itm[j].title);
                printf("Unit = ");
                scanf("%d", &itm[j].unit);
                printf("Measure of unit = ");
                scanf("%s", itm[j].measureOfUnit);
                printf("Unit price = ");
                scanf("%f", &itm[j].unitPrice);
                printf("Stock = ");
                scanf("%f", &itm[j].stock);
                break;
            }
        }
        n++;
    }
    else{
        printf("Maximum products exceeded..(max=>25)\n");
    }
}

int main(){

	int choice, j;
	itm[0].index = 0;
	strcpy(itm[0].itemCode, "ITEM400");
	strcpy(itm[0].title, "SunlightSoap");
	itm[0].unit = 1;
	strcpy(itm[0].measureOfUnit, "_");
	itm[0].unitPrice = 27.0;
	itm[0].stock = 200.0;

	itm[1].index = 1;
	strcpy(itm[1].itemCode, "ITEM401");
	strcpy(itm[1].title, "AnchorPacket(400g)");
	itm[1].unit = 1;
	strcpy(itm[1].measureOfUnit, "_");
	itm[1].unitPrice = 170.0;
	itm[1].stock = 50.0;

	itm[4].index = 4;
	strcpy(itm[4].itemCode, "ITEM404");
	strcpy(itm[4].title, "AnchorPacket(1kg)");
	itm[4].unit = 1;
	strcpy(itm[4].measureOfUnit, "_");
	itm[4].unitPrice = 550.0;
	itm[4].stock = 25.0;

	itm[12].index = 12;
	strcpy(itm[12].itemCode, "ITEM412");
	strcpy(itm[12].title, "Rice");
	itm[12].unit = 1;
	strcpy(itm[12].measureOfUnit, "kg");
	itm[12].unitPrice = 80.0;
	itm[12].stock = 300.5;

	itm[20].index = 20;
	strcpy(itm[20].itemCode, "ITEM420");
	strcpy(itm[20].title, "Dhal");
	itm[20].unit = 500;
	strcpy(itm[20].measureOfUnit, "g");
	itm[20].unitPrice = 65.5;
	itm[20].stock = 200.75;

	itm[19].index = 19;
	strcpy(itm[19].itemCode, "ITEM419");
	strcpy(itm[19].title, "CordialBottle");
	itm[19].unit = 250;
	strcpy(itm[19].measureOfUnit, "ml");
	itm[19].unitPrice = 225.5;
	itm[19].stock = 10.0;

	itm[11].index = 11;
	strcpy(itm[11].itemCode, "ITEM411");
	strcpy(itm[11].title, "SunflowerOil");
	itm[11].unit = 1;
	strcpy(itm[11].measureOfUnit, "L");
	itm[11].unitPrice = 160.0;
	itm[11].stock = 20.0;
	int n=7;
	int k;

	int s,l,m;
    char cc[10];
    float qt,total=0,price=0;
	
	printf("..Welcome to our super Market..\n");
	printf("-------------------------------\n");
	while(choice!=4){
		printf("\n1. Display the details of items.\n");
		printf("2. Insert new item.\n");
		printf("3. Buy items\n");
		printf("4. Exit.\n\n");
		printf("Enter your choice = ");
		scanf("%d", &choice);

		switch(choice){
			case 1:
				printf("\nDisplay details...\n");
				printf("-------------------\n");
				printf("\nItem Code\tUnit\tPrice\tStock\tItem\n");
				displayDetails(itm[0]);
				for(j=0; j<25; j++){
                    if(itm[j].index != NULL)
					displayDetails(itm[j]);
				}
			break;
			case 2:
				printf("\nInsert new item\n");
				printf("----------------\n");
				insertItem(itm);
				printf("\nNew Item inserted successfully..\n");
			break;
			case 3:

			    printf("\n");
			    printf("how many Product are you given :");
			    scanf("%d", &s);
			    for(l=0;l < s;l++){
                    printf("Enter item code & Quantity: ");
                    scanf("%s %f",&cc ,&qt);

                    for(m=0;m<25;m++){
                        if(strcmp(itm[m].itemCode,cc) == 0){
                            price = itm[m].unitPrice *qt;
                        }
                    }
                    total = total + price;
			    }


			    printf("\nGrand total is: %.2f\n",total);
				printf("---------------------\n");



			break;
			case 4:
				printf("\nThank you!!\n");
			break;
			default:
				printf("Invalid input.");
				system("pause");
			break;
		}
	}




	return 0;
}
