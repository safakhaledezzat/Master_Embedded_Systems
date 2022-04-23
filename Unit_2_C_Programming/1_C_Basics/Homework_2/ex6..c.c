/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: safa_khaled
 */


/* sum of natural numbers */
#include <stdio.h>
int main (void)
{
	int n ,i , sum=0;
	printf(" Enter an integer :");
	fflush (stdout);
	scanf("%d",&n);

	for (i=0 ; i<=n ; i++)
	{
		sum = sum+i;
	}
	printf("sum = %d",sum);



	return 0;
}
