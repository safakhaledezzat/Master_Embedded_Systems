/*
 * fun4.c
 *
 *  Created on: ??�/??�/????
 *      Author: Safa_khaled
 */
#include<stdio.h>
int power (int n1, int n2);

int main(void)
{   int exp , base;
	printf("Enter base number :");
	fflush(stdout);
	scanf("%d",&base);
	printf("Enter power number (positive integer): ");
	fflush(stdout);
	scanf("%d",&exp);
	printf("%d ^ %d = %d ",base , exp, power(base,exp));
	fflush(stdout);

return 0;
}

int power (int n1 , int n2)
{

if(n2 != 0)
{
return (n1 * power(n1,n2-1));
}

else
	return 1;

}
