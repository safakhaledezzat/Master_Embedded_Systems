/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: safa_khaled
 */


                                /* vowel or consonant */
#include<stdio.h>
int main(void)
{
	char x;
	printf(" Enter an alphabet :");
	fflush (stdout);
	scanf("%c",&x);

	if (x=='a' || x=='A' || x=='e' || x=='E' || x=='i' || x=='I' || x=='o' || x=='O' || x== 'u' || x== 'U')
	{

		printf("%c is a vowel", x);
	}

	else
	{
		printf("%c is a consonant" , x);
	}


	return 0;

}
