/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author:safa_khaled
 */



#include <stdio.h>
int main(void)
{
	int a , b;
	printf("Enter value of a :");
	fflush (stdout);
	scanf("%d",&a);
	printf("Enter value of b :");
	fflush (stdout);
	scanf("%d",&b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("After swapping, value of a = %d \n", a);
	printf("After swapping, value of b = %d \n", b);





	return 0;
}
