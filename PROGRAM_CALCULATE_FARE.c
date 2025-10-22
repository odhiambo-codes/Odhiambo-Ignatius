/*
NAME:IGNATIUS ODHIAMBO WANDERA
REG NO: PA106/G/28770/25
DES:CALCULATE_FARE
*/

#include<stdio.h>

//function prototype
float fare(float distance);

void main()
{

	//function call
	float distance, fare;

	//prompt user to enter the distance covered
	printf("Enter the distance you covered(in KM):\n");
	scanf("%f", &distance);

	fare = distance * 50;

	printf("Your fare = %.2fKshs\n", fare);
	
	return 0;

}

//function definition
float fare(float distance)
{
	float fare;
	fare = distance * 50;
	return fare;
}
