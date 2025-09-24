/*
Name: Ignatius Odhiambo Wandera
Reg No:PA106/G/28770/25
Description: Program to implement age and annual income for loans
*/

#include<stdio.h>

//main function

int main(){
	
	//variable declaration
	int age;
	float income;
	
	//prompt user to enter age
	printf("\nEnter age (in years):");
	scanf("%d" ,&age);
	
	//prompt user to enter income
	printf("\Enter annual income (in Kshs):");
	scanf("%f" ,&income);
	
	//compute loan offered
	printf("\The bank offers loan for individuals above age 21 or over with income of at least sh21000\n)");
	
	//display results
	printf("The age is : %d and income is Kshs: %.2f\n",age,income);
	
	return 0;
	
} 