/*
 * EX_5.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: safa_khaled
 */


#include<stdio.h>
int main(void)
{
	int arr[10],i,n,element;
	printf("Enter number of elements:");
	fflush(stdout);
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter the element to be searched :");
	fflush(stdout);
	scanf("%d",&element);

	for( i=0 ; i<n ; i++)
	{
		if(arr[i]== element)
		{
			printf("number found at the location = %d", i+1);
			fflush(stdout);
		}


	}


	return 0;
}
