/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: safa_khaled
 */

/* Alphabet or Not*/
#include <stdio.h>
int main(void)
{
	char x;
	printf(" Enter a character :");
	fflush (stdout);
	scanf("%c",&x);
	if ((x>= 'a' && x<= 'z') || (x>= 'A' && x<= 'Z'))
	{
		printf(" %c is an alphabet ", x);
	}
	else
	{
		printf(" %c is not an alphabet ", x);
	}




	return 0;

}
