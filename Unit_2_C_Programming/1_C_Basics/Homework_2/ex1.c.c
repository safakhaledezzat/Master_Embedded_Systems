/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: safa_khaled
 */

                            /* odd or even */

#include <stdio.h>
int main (void)
{      int x;
printf("Enter an integer you want to check ");
fflush (stdout);
scanf("%d",&x);
if ( x % 2 == 0)
{
	printf("%d is even", x);
}
else
{
	printf("%d is odd", x);
}



return 0;
}
