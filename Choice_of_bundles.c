/*
Name :Ignatius Odhiambo Wandera
Reg No: PA106/G/28770/25
Description :Choice_of_bundles
*/
#include<stdio.h>
//main function
int main()
{
	
	//variable declaration
	int choice;
	
	printf("Select data bundle\n");
	
	printf("1. 100MB @ 50(KES)\n");
	printf("2. 500MB @ 200(KES)\n");
	printf("3. 1GB @ 350(KES)\n");
	printf("4. 2GB @ 600(KES)\n");
	
	//prompt user to enter their choice of bundle
	printf("Enter your choice of bundle(1-4):\t");
	scanf("%d" ,&choice);
	
	switch(choice){
	case 1:
		printf("You selected 100MB. Cost= 50 KES\n");
		break;
	case 2:
		printf("You selected 500MB. Cost = 200 KES\n");
		break;
	case 3:
		printf("You selected 1 GB. Cost = 350 KES\n");
		break;
	case 4:
		printf("You selected 2 GB. Cost = 600 KES\n");
		break;
	default:
		printf("Invalid choice,Please enter a number between 1 and 4 if not,KINDLY ask for assistance.\n");			
	}
	
	return 0;
}