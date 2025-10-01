/*
Name :Ignatius Odhiambo Wandera
Reg No:PA106/G/28770/25
Description: Program to compute water_bills
*/
#include<stdio.h>
//main function
int main(){
	
	//variable declaration
	float water_units,water_bill;
	
	//prompt user to enter the water_units consumed
	printf("Enter water_units consumed:\t");
	scanf("%f" ,&water_units);
	
	if (water_units <=30){
		water_bill = water_units * 20;
	}
	else if(water_units >=31 && water_units <=60){
		water_bill = water_units * 25;
	}
	else
	{
		water_bill = water_units * 30;
	}
	
	//display results
	printf("Total water bill :%.2f KES" ,water_bill);	
	
	return 0;
}