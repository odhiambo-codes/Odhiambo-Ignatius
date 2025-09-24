/*
Name :Ignatius Odhiambo Wandera
Reg No: PA106/G/28770/25
Description: Program to compute compound interest
A = P *(1+r/(100*n))^(n*t)
*/
#include<stdio.h>
#include<math.h>
//main function
int main(){
	
	//variable decalaration
	float principle,rate,time,amount,n;
	
	//prompt user to enter principle
	printf("\nEnter the principle :");
	scanf("%f" ,&principle);
	
	//prompt user to enter rate
	printf("\nEnter the rate(in %) :");
	scanf("%f" ,&rate);
	
	//prompt user to enter time
	printf("\nEnter the time(in years):");
	scanf("%f" ,&time);
	
	//prompt user to enter n
	printf("\nEnter the number of times interest is compounded per year(n) :");
	scanf("%f" ,&n);
	
	//compute compound interest
    amount = principle * pow(1 + rate / (100 * n), n * time);
	
	//Display results
	printf("\nThe compound amount in Kshs. %.2f\n",amount);
	
	return 0;
	
}