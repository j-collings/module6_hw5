/*
 * =====================================================================================
 *
 *       Filename:  deuteron_hw5_task1.c
 *       	Usage:  ./deuteron_hw5_task1.c
 *    Description:  Calculations for an annulus.  
 *
 *        Version:  1.0
 *        Created:  02/14/2017 04:41:59 PM
 *       Compiler:  gcc -Wall -Werr
 *         Author:  Julie Collings juliecollings@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>

//Function prototype
void AnnulusMoment(double i, double j);

int main()
{
	double outer, inner;
	//Get the two radii from which to do calculations
	printf("Enter the value for outer radius (r2): ");
	scanf("%lf", &outer);
	printf("Enter the value for inner radius (r1): ");
	scanf("%lf", &inner);
	//Pass the values to the function
	AnnulusMoment(outer, inner);
	return 0;
}

//Function definition of function used to calculate and display the second moment of inertia
void AnnulusMoment(double i, double j)
{
	double inertia = 0.0;
	//Calculate the inertia
	inertia = (3.14/4) *((i * i * i * i) - (j * j * j * j));
	//Display the calculated value
	printf("The second moment of inerta is %.2f \n", inertia);
	return;

}
