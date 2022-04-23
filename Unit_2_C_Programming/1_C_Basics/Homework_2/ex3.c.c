/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: safa_khaled
 */


/* the largest number */
#include <stdio.h>
int main(void)
{
	float x,y,z;
	printf(" Enter three numbers :");
	fflush (stdout);
	fflush (stdin);
	scanf("%f %f %f",&x,&y,&z);

	if (x>y && x>z)
	{
		printf("largest number = %f",x);
		fflush (stdout);
	}
	else if (y>x && y>z)
	{
		printf("largest number = %f",y);
		fflush (stdout);
	}
	else
	{
		printf("largest number = %f",z);
		fflush (stdout);
	}

	return 0;

}
