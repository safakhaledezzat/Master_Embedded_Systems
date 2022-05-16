/*
 * EX_1.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: safa_khaled
 */



#include<stdio.h>

int main(void)
{

	char text[100],ch;
	int i,count=0;
	printf("Enter a string:");
	fflush(stdout);
	gets(text);
	printf("Enter a character to find frequancy: ");
	fflush(stdout);
	scanf("%c",&ch);

	for(i=0 ; text[i]!='\0' ; i++)
	{
		if (ch == text[i])
		{
			count++;
		}
	}
	printf("frequancy of %c = %d", ch , count);
	fflush(stdout);

	return 0;
}
