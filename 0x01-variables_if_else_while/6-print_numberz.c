#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry Point
 *
 * digit - single digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
