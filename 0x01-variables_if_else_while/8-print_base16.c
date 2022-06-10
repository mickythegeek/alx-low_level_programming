#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry Point
 *
 * num - represents numbers of base 16
 *
 * hex - represents A-F in Hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char hex;

	for (num = 48 ; num < 58; num++)
	{
		putchar(num);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}

