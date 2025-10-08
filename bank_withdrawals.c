/*
Name :Ignatius Odhiambo Wandera
Reg :PA106/G/28770/25
Description: bank_withdrawals
*/
#include<stdio.h>
//main function
int main(){
	
	//variable declaration
	int total_amount = 1000, balance,withdrawal;
	
	balance = total_amount;
	
	//prompt user to enter the amount
	while (balance > 0)
	{
	printf("Enter the amount you wish to withdraw:\n");
	scanf("%d" ,&withdrawal);
	
	balance = balance - withdrawal;
	
	printf("New balance = %d\n" ,balance);
	
	}
	
	printf("You have insufficient balance");
	return 0;
}