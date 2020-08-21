#include<stdio.h>

struct distance{
	int feet;
	int inch;
}d[2];

int main(){
	int i=0, j=0;
	
	printf("Enter distances...\n");
	printf("------------------\n");
	for(i=0; i<2; i++){
		printf("\nEnter distance %d\n", i+1);
		printf("Enter feet = ");
		scanf("%d", &d[i].feet);
		printf("Enter inches = ");
		scanf("%d", &d[i].inch);
	}
	
	int sumFeet = 0;
	for(j=0; j<2; j++){
		sumFeet = sumFeet + d[j].feet;
	}	

	int sumInch = 0;
	for(j=0; j<2; j++){
		sumInch = sumInch + d[j].inch;
	}
	
	while(sumInch>12){
		if(sumInch>12){
			sumFeet = sumFeet + 1;
			sumInch = sumInch - 12;
		}
	}
	
	printf("\nSum of distance = %d feets and %d inches", sumFeet, sumInch);
	return 0;
}
