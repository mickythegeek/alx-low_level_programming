#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry Point
 *
 * digit - single digitsof Base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char digit = '0';

	for (digit = '0'; digit < '10'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
