#include<stdio.h>

struct student{
	int id;
	char name[50];
	int age;
	char address[100];
	int mark;
}s[5];

int main(){
	//struct Students s[2];
	int i=0, j=0;
	
	printf("Store students' details ==> \n");
	printf("---------------------------\n");
	for(i=0; i<5; ++i){
		printf("\nEnter student's id = ");
		scanf("%d", &s[i].id);
		printf("Enter student's name = ");
		scanf("%s", s[i].name);
		printf("Enter student's age = ");
		scanf("%d", &s[i].age);
		printf("Enter address = ");
		scanf("%s", s[i].address);
		printf("Enter marks = ");
		scanf("%d", &s[i].mark);
		//printf("%d", i);
	}
	
	printf("\n\nPrint students' details ==> \n");
	printf("----------------------------\n");
	for(j=0; j<5; ++j){
		printf("\nStudent index is %d\n", s[j].id);
		printf("Student name is ");
		puts(s[j].name);
		printf("Student age is %d\n", s[j].age);
		printf("Student address is ");
		puts(s[j].address);
		printf("Student mark is %d\n", s[j].mark);
		//printf("%d", j);
	}
	
	return 0;
}
