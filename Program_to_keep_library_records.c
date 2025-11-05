/*
NAME: IGNATIUS ODHIAMBO WANDERA
REG NO:PA106/G/28770/25
DESCRIPTION:Program_to_keep_library_records

*/
#include<stdio.h>
//main function
int main(){
	
	FILE * fptr;
	
	fptr = fopen("Borrowed_books.txt","a");
	
	if(fptr == NULL){
		printf("File not found\n");
	}
	else
	{
		printf("File is opening.....\n");
		
		char book_title[400];
		
		//prompt user to enter the titles of the book
		printf("Enter the title of the book:\n");
		fgets(book_title,sizeof(book_title), stdin);
		
		fprintf(fptr, "%s", book_title);
		fclose(fptr);
		
		printf("The book title has successfully been stored in borrowed_books.txt.\n");
	}
	return 0;
}