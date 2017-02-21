/*
 * =====================================================================================
 *
 *       Filename:  deuteron_hw5_task11.c
 *       	Usage:  ./deuteron_hw5_task11.c
 *    Description: Calculating second moment of inertia
 *
 *        Version:  1.0
 *        Created:  02/21/2017 02:37:31 AM
 *       Compiler:  gcc -Wall -Werr
 *         Author:  Sherry Masutani (), sherrymasutani@mail.weber.edu
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>

void AnnulusMoment(double x, double y);

int main(void)
{
	double outer, inner;
	printf("Enter value for outer radius: ");
	scanf("%lf", &outer);
	printf("Enter value for inner radius: ");
	scanf("%lf", &inner);
	AnnulusMoment(outer, inner);
	return 0;
}

void AnnulusMoment(double x, double y)
{
	double I = 0.0;
	I = (3.14159265/4) * ( (pow(x, 4)) - (pow(y, 4)) );
	printf("The second moment of inertia is: %.2f.\n", I);
	return;
}

