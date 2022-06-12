#include <stdio.h>
#include "main.h"
/**
 * print_sign - Prints the sign of a number
 *
 * @n: Number to be checked
 *
 * Return: 1, if positive. 0, if zero. -1, if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("1");
		return (1);
	}
	else if ( n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-1");
		return (-1);
	}
}
