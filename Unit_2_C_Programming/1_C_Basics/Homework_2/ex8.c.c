/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: safa_khaled
 */


/* simple calculator*/
#include <stdio.h>
int main(void)
{ char op;
float num1,num2;
printf("Enter operator either + or - or * or divide :-");
fflush (stdout);
fflush (stdin);
scanf("%c",&op);
printf("Enter two operands :");
fflush (stdout);
scanf("%f %f",&num1,&num2);
switch (op)
{
case '+':
{	printf("%f + %f = %f", num1,num2,num1+num2);
}
break;
case '-':
{	printf("%f - %f = %f", num1,num2,num1-num2);
}
break;
case '*':
{
	printf("%f * %f = %f", num1,num2,num1*num2);
}
break;
case '/':
{
	printf("%f + %f = %f", num1,num2,num1/num2);
}
break;

default :
{
}
break;
}
return 0;
}
