#include<stdio.h>

struct Marks{
	int ID_no;
	char name[50];
	int chem_marks;
	int maths_marks;
	int phy_marks;
}M[5];

int main(){
	int i=0, j=0;
	printf("Enter details of students..\n");
	printf("---------------------------\n\n");
	for(i=0; i<5; i++){
		printf("Enter student %d details..\n", i+1);
		printf("Enter name = ");
		scanf("%s", M[i].name);
		printf("Enter chemistry marks = ");
		scanf("%d", &M[i].chem_marks);
		printf("Enter mathematics marks = ");
		scanf("%d", &M[i].maths_marks);
		printf("Enter physics marks = ");
		scanf("%d", &M[i].phy_marks);
	}
	
	for(j=0; j<5; j++){
		printf("\nStudent %d\n", j+1);
		printf("\nStudent name is ");
		puts(M[j].name);
		float precentage = (M[j].chem_marks+M[j].maths_marks+M[j].phy_marks)/300.0*100;
		printf("Precentage is %f\n", precentage);
	}
	
	return 0;
}
