/*
NAME:IGNATIUS ODHIAMBO WANDERA
REG NO: PA106/G/28770/25
Descpription:2D_array_room_occupancy
*/
#include<stdio.h>
//main function
int main()
{

	//variable declaration
	int occupancy [5][10] =
	{

		{1 , 1 , 1 , 0 , 1 , 0 , 1 , 1 , 1 , 1},
		{1 , 1 , 0 , 1 , 1 , 1 , 0 , 1 , 1 , 1},
		{1 , 0 , 1 , 1 , 1 , 0 , 1 , 0 , 1 , 1},
		{0 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 0 , 1},
		{1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 0}

	};
	int i, j;

	for(i = 0; i < 5; i++)
	{
		printf("floor[%d] :\n", i);
		for(j = 0; j < 10; j++)
		{
			printf("room[%d]=%d\n", j, occupancy[i][j]);
		}
		printf("\n");
	}
	return 0;
}
