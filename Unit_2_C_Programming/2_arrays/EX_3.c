/*
 * EX_3.c
 *
 *  Created on: ??�/??�/????
 *      Author: safa_khaled
 */




#include<stdio.h>
int main(void)
{
	int a[20][20],trans[20][20], R,C,i,j;
	printf(" Enter rows and coulms of matrix :");
	fflush(stdout);
	scanf("%d%d",&R,&C);

	printf("Enter the elements of matrix :\n");
	fflush(stdout);
	for(i=0 ; i<R ; i++)
	{
		for ( j=0 ; j<C ; j++)
		{
			printf("Enter a%d%d:", i+1,j+1);       //storing the elements of the matrix
			fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	}
	printf(" the Entered matrix:\n");
	for(i=0 ; i<R ; i++)
	{
		for ( j=0 ; j<C ; j++)
		{
			printf("%d  ",a[i][j]);  //displaying the elements of the matrix
			fflush(stdout);
			if(j==C-1)
				printf("\n\n");

		}
	}

	for(i=0 ; i<R ; i++)
	{
		for ( j=0 ; j<C ; j++)
		{
			trans[j][i]=a[i][j];                            //finding the transpose of the matrix

		}
	}
	printf("the transposed matrix is :\n");
	for(i=0 ; i<C ; i++)
	{
		for ( j=0 ; j<R ; j++)
		{
			printf("%d  ", trans[i][j]);     //displaying the transpose of the matrix
			fflush(stdout);
			if(j==R-1)
				printf("\n\n");

		}
	}



	return 0;
}
