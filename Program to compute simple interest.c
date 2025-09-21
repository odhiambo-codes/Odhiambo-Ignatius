/*
Name:Ignatius Odhiambo Wandera
Reg No:PA106/G/28770/25
Description:Program to calculate simple interest
S_I =P * R/100 * T
*/
#include<stdio.h>
//main function
int main(){
	
	//variable declaration
	float principle,rate,time,interest;
	
	//prompt user to enter principle
	printf("\n Enter principle: ");
	scanf("%f" ,&principle);
	
	//prompt user to enter rate
	printf("\n Enter the rate: ");
	scanf("%f" ,&rate);
	
	//prompt user to enter time
	printf("\n Enter time");
	scanf("%f" ,&time);
	
	//compute interest
	interest= principle * rate/100 * time;
	
	printf("\n Simple interest is Ksh. %.2f", interest);
	return 0;
	
}