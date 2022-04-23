/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: safa_khaled
 */

/* factorial */

#include<stdio.h>
int main(void)
{
	int n , i , fact=1;
	printf(" Enter an integer :");
	fflush (stdout);
	scanf("%d",&n);

	if (n == 0)
	{
		printf("factorial of 0 is 1");
	}
	else if (n < 0)
	{
		printf("Error!!! factorial of negative number doesn't exist");
	}
	else
	{
		for (i=1 ; i<=n ; i++)
		{
			fact = fact*i;
		}

		printf("factorial = %d",fact);

	}



	return 0;

}
