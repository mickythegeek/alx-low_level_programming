#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry Point
 *
 * digit - single digits
 *
 * base - Represent Base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char digit = '0';
	char* base = "10";

	for (digit = '0'; digit < base; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
