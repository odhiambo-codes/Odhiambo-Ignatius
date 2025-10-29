/*
NAME:IGNATIUS ODHIAMBO WANDERA
REG NO:PA106/G/28770/25
DESCRIPTION: 3D_array_chain
*/
#include<stdio.h>
//main function
int main()
{

	//variable declaration
	int chain[3][5][10]
	=
	{
		{
			{1 , 1 , 1 , 0 , 1 , 0 , 1 , 1 , 1 , 1},
			{1 , 1 , 0 , 1 , 1 , 1 , 0 , 1 , 0 , 0},
			{1 , 0 , 1 , 1 , 1 , 0 , 1 , 0 , 1 , 1},
			{0 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 0 , 0},
			{1 , 1 , 0 , 1 , 0 , 0 , 0 , 1 , 1 , 0}
		},
		{
			{1 , 1 , 1 , 0 , 1 , 0 , 1 , 1 , 1 , 1},
			{1 , 1 , 0 , 1 , 1 , 1 , 0 , 1 , 1 , 0},
			{1 , 0 , 1 , 1 , 1 , 0 , 1 , 0 , 1 , 1},
			{0 , 1 , 1 , 0 , 1 , 1 , 0 , 1 , 0 , 0},
			{1 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 0}
		},
		{
			{1 , 1 , 1 , 0 , 1 , 0 , 1 , 1 , 1 , 1},
			{1 , 1 , 0 , 1 , 1 , 1 , 0 , 1 , 1 , 0},
			{1 , 0 , 1 , 1 , 1 , 0 , 1 , 0 , 1 , 1},
			{0 , 0 , 1 , 0 , 1 , 1 , 1 , 1 , 0 , 0},
			{0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 0}
		},
	};
	int i, j, k, branches, floor, room,occupancy;

	for(i = 0; i < 3; i++)
	{
		printf("Branches =%d\n", i);
		for(j = 0; j < 5; j++)
		{
			printf("Floor=%d\n", j);
			for(k = 0; k < 10; k++)
			{
				printf("Rooms %d =%d\n", k, chain[i][j][k]);
			}
		}
		printf("\n");
	}

int totalOccupied = 0; 

for(i = 0; i < 3; i++)
{
    for(j = 0; j < 5; j++)
    {
        for(k = 0; k < 10; k++)
        {
            totalOccupied += chain[i][j][k]; // Adds 1 if occupied, 0 if not
        }
    }
}

printf("Total number of occupied rooms: %d\n", totalOccupied);
return 0;
}