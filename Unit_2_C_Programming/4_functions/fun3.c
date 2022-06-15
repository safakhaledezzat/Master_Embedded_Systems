/*
 * fun3.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Safa_khaled
 */

#include<stdio.h>
void Reverse();

int main(void)
{

	printf("Enter a sentence : ");
	fflush(stdout);
	Reverse();
	return 0;
}

void Reverse()
{
	char x ;
    scanf("%c",&x);
	if( x != '\n')
	{
		Reverse();
		printf("%c",x);
		fflush(stdout);
	}

}
