/*
 * =====================================================================================
 *
 *       Filename:  duterons_hw5_task2.c
 *       	Usage:  ./duterons_hw5_task2.c
 *    Description:  Coverts a table of values from miles to kilometers.
 *
 *        Version:  1.0
 *        Created:  02/20/2017 05:41:40 AM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Julie Collings (), juliecollings@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */

/* Function Prototypes */
void MakeMilesKmTable(int i, int j, int k);

/* Main Program */
int main(void)
{
	int startingMiles, endingMiles, increments;

	printf("Enter the starting miles: ");
	scanf("%d", &startingMiles);
	printf("Enter the ending miles: ");
	scanf("%d", &endingMiles);
	printf("Enter the increments: ");
	scanf("%d", &increments);
	printf("Miles  =  Kilometers\n");
	MakeMilesKmTable(startingMiles, endingMiles, increments);



	return 0;
}


/* Function Definitions */
void MakeMilesKmTable(int i, int j, int k)
{
	int miles;
	float kilometers;
	//start at i, increase by k, stop when j reached
	miles = i;
	while(miles <= j)
	{
		kilometers = miles * 1.61;
		printf("%3d        %-10.2f\n", miles, kilometers);
		miles = miles + k;
	}
	
}

