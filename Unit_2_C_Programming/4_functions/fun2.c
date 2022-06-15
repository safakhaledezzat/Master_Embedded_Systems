/*
 * fun2.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Safa_khaled
 */


#include<stdio.h>
int factorial(int n);


int main(void)

{ int num ;
printf("Enter a positive integer :");
fflush(stdout);
scanf("%d",&num);

printf("the factorial of %d = %d",num,factorial(num));
fflush(stdout);

return 0;
}

int factorial(int n)
{
	if(n!=1)
		return n*factorial(n-1);

}

