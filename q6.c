#include<stdio.h>

struct customer{
	char name[30];
	int accNmbr;
	int balance;
}c[50];

void minimumAcc(int bal, char name[]){
	if(bal<200){
		printf("%s\n", name);
	}
}

void maximumAcc(int bal, char name[]){
	if(bal>1000){
		bal = bal + 100;
		printf("Now %s's account balance is %d", name, bal);
	}
}

int main(){
	int n, i, j;
	
	printf("Store customer details...\n");
	printf("-------------------------\n");
	printf("Enter the number of customers = ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("Enter name = ");
		scanf("%s", c[i].name);
		printf("Enter Account Number = ");
		scanf("%d", &c[i].accNmbr);
		printf("Enter balance = ");
		scanf("%d", &c[i].balance);
	}
	
	printf("\nCustomers having balance less than Rs.200\n");
	for(j=0; j<n; j++){
		minimumAcc(c[j].balance, c[j].name);
	}
	
	printf("\nCustomers having balanace greater than Rs.1000 are increased acc balance..\n");
	for(j=0; j<n; j++){
		maximumAcc(c[j].balance, c[j].name);
	}
	return 0;
}
