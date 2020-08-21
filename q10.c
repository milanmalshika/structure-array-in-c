#include<stdio.h>
#include<string.h>

struct book{
	int accNo;
	char nameOfAuthor[30];
	char bookTitle[20];
	int issue;
}b[50];

int main(){
	int i, n, choice, j, count=0;
	char athr[30], title[20];
	printf("Store the book details..\n");
	printf("------------------------\n");
	printf("Enter the number of books = ");
	scanf("%d", &n);

	for(i=0; i<n; i++){
		printf("Accession number = ");
		scanf("%d", &b[i].accNo);
		printf("Name of author = ");
		scanf("%s", b[i].nameOfAuthor);
		printf("Book title = ");
		scanf("%s", b[i].bookTitle);
		b[i].issue = 0;
	}

	while(choice!=7){
		printf("\n1. Display book information.\n");
		printf("2. Add a new book.\n");
		printf("3. Display all the books in the library of a particular author\n");
		printf("4. Display the number of books of a particular title\n");
		printf("5. Display the total number of books in the library\n");
		printf("6. Issue a book\n");
		printf("7. Exit\n");
		printf("Enter your choice = ");
		scanf("%d", &choice);

		switch(choice){
			case 1:
				printf("All books information\n");
				printf("---------- Acces_Num   Author      Title   Issued\n");
				for(j=0; j<n; j++){
					printf("Book %d =>   %d         %s        %s      %d\n", j+1, b[j].accNo, b[j].nameOfAuthor, b[j].bookTitle, b[j].issue);
				}
			break;
			case 2:
				printf("Accession number = ");
				scanf("%d", &b[n].accNo);
				printf("Name of author = ");
				scanf("%s", b[n].nameOfAuthor);
				printf("Book title = ");
				scanf("%s", b[n].bookTitle);
				n = n+1;
			break;
			case 3:
				printf("Enter authuor name = ");
				scanf("%s", &athr);
				//printf("%s", athr);

				for(j=0; j<n; j++){
					//printf("%s", b[j].nameOfAuthor);
					if(strcmp(athr,b[j].nameOfAuthor) == 0){
						//printf("%s", b[j].nameOfAuthor);
						printf("Accession number = %d and book title is %s\n", b[j].accNo, b[j].bookTitle);
					}
				}
			break;
			case 4:
				printf("Enter book title = ");
				scanf("%s", &title);
				//printf("%s", title);
				for(j=0; j<n; j++){
					if(strcmp(title,b[j].bookTitle) == 0){
						count = count + 1;
					}
				}
				printf("Number of books of a particular title = %d", count);
			break;
			case 5:
				printf("Total number of books in the library = %d", n);
			break;
			case 6:
				printf("The title of the book you want = ");
				scanf("%s", title);
				printf("The author of the book you want = ");
				scanf("%s", athr);
				for(j=0; j<n; j++){
					if(strcmp(title,b[j].bookTitle) == 0 && strcmp(athr,b[j].nameOfAuthor) == 0){
						b[j].issue = 1;

						printf("Issued success\n");
					}
				}
			break;
			case 7:
				printf("Thank you.\n");
			break;
			default:
				printf("Invalid input..\n");
		}
	}

	return 0;
}
