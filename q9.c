#include<stdio.h>

struct employee{
	char name[30];
	int salary;
	int hrsOfWork;
}e[10];

int main(){
	int i, j, k;
	printf("Store the data of employees\n");
	printf("---------------------------\n");
	
	for(i=0; i<10; i++){
		printf("Employee %d\n", i+1);
		printf("Name = ");
		scanf("%s", e[i].name);
		printf("Salary = ");
		scanf("%d", &e[i].salary);
		printf("Hours of work = ");
		scanf("%d", &e[i].hrsOfWork);
	}
	
	for(j=0; j<10; j++){
		if(e[j].hrsOfWork==8){
			e[j].salary = e[j].salary + 500;
		}
		else if(e[j].hrsOfWork==10){
			e[j].salary = e[j].salary + 1000;
		}
		else if(e[j].hrsOfWork==12){
			e[j].salary = e[j].salary + 1500;
		}
	}
	printf("\nSalaries after the updated..\n");
	printf("------------------------------\n");
	for(k=0; k<10; k++){
		printf("%s's salary is %d\n", e[k].name, e[k].salary);
	}
	
	return 0;
}
