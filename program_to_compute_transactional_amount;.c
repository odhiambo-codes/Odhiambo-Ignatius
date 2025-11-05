/*
Name : IGNATIUS ODHIAMBO WANDERA
REG NO: PA106/G/28770/25
Description:Program_to_read_transactions.
*/
#include<stdio.h>
//main function
int main(){
	
	FILE * fptr;
	float transactional_amount;
	float total_sales=0.00;
	
	fptr = fopen("sales.txt","a");
	
	if(fptr == NULL){
		printf("Error opening the file.\n");
		return 1;
	}
	while(fscanf(fptr, "%f",&transactional_amount)==1){
		total_sales += transactional_amount;
	}
	printf("Total sales for the day: %.2f\n", total_sales);
	
	fclose(fptr);
	
	return 0;
}