/*
 * EX_3.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: safa_khaled
 */



#include<stdio.h>
#include<string.h>

int main(void)

{
	char text[100] , temp;
	int i,j;
	printf("Enter a string :");
	fflush(stdout);
	scanf("%s",text);
	j=strlen(text)-1;

	for (i=0 ; i<j ; i++)
	{ temp = text[i];
	text[i]=text[j];
	text[j]=temp;
	j--;
	}

	printf("Reverse string is : %s",text);
	return 0;
}
