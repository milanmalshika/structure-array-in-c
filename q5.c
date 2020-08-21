#include<stdio.h>

struct student{
	int id;
	char name[30];
	int age;
	char address[30];
}s[50];
char namesFourteen[50];

void fourteen(int age, char name[]){
	if(age==14){
		printf("%s\n", name);
	}
}

void even(int id, char name[]){
	if(id%2==0){
		printf("%s\n", name);
	}
}

void display(char name[], int age, char address[]){
	printf("Name = %s\n", name);
	printf("Age = %d\n", age);
	printf("Address = %s\n", address);
}

int main(){
	int n, i, j, choice;
	int id;
	printf("Store the details of students....\n");
	printf("---------------------------------\n");
	
	printf("Enter the number of students = ");
	scanf("%d", &n);	
	
	for(i=0; i<n; i++){
		printf("Student %d\n", i+1);
		printf("Id number = ");
		scanf("%d", &s[i].id);
		printf("Name = ");
		scanf("%s", s[i].name);
		printf("Age = ");
		scanf("%d", &s[i].age);
		printf("Address = ");
		scanf("%s", s[i].address);
		
	}
	
	while(1){
		
	}
	printf("1. Print the names of all the students having age 14.\n");
	printf("2. Print the names of all the students having even ID number.\n");
	printf("3. Display student deatils.\n");
	printf("4. Exit.\n");
	printf("Enter your choice..");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			printf("\nNames of the all students having age 14.\n");
			for(j=0; j<n; j++){
				fourteen(s[j].age, s[j].name);
			}
		break;
		case 2:
			printf("\n\nNames of the all students having even id number.\n");
			for(j=0; j<n; j++){
				even(s[j].id, s[j].name);
			}
		break;
		case 3:
			printf("Enter student id = ");
			scanf("%d", &id);
			for(j=0; j<n; j++){
				if(id==s[j].id){
					display(s[j].name, s[j].age, s[j].address);
				}
			}	
		break;
		case 4:
			exit(1);
			break;
		default:
			printf("Invalid input..\n");
		break;
	}
		
	return 0;
}
