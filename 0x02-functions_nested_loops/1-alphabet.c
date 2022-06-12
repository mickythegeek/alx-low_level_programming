#include "main.h"

/**
 * print_alphabet - Prints the alphabets in lowercase
 *
 * Return: 0 (Always Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
