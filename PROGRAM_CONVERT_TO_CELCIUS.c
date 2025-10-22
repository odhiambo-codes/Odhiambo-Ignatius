/*
NAME: IGNATIUS ODHIAMBO WANDERA
REG NO: PA106/G/28770/25
DESCRIPTION:CONVERT_TO_CELCIUS
*/
#include<stdio.h>

//function prototype
float temperature(float C);

void main()
{

	float temperature, C;

	//function call
	//prompt user to enter the temperature
	printf("Enter the temperature:\n");
	scanf("%f", &temperature);

	C = (temperature - 32) * (5.0 / 9.0);

	printf("Your temperature after conversion = %.2fC\n", C);



}

//function definition
float temperature(float C)
{
	float temperature;
	C = (temperature - 32) * (5.0 / 9.0);
	return temperature;
}
