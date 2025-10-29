/*
Name: IGNATIUS ODHIAMBO WANDERA
REG NO: PA106/G/28770/25;
Description:1D_array_for_hotel_records
*/
#include<stdio.h>
//main function
int main()
{

	//variable declaration
	int revenue [7] = {20000, 25000, 21000, 23000, 24000, 22250, 23400};
	int i, sum =0, average;

	for(i = 0; i < 7; i++)
	{
		printf("revenue[%d] = %d\n", i, revenue[i]);
		sum += revenue[i];//add each days' revenue to the total
	}

	average = sum / 7;

	printf("Total weekly earnings = %d\n", sum);
	
	printf("Average weekly earnings = %d\n", average);
	return 0;
}
