#include "main.h"
/**
 * print_alphabet - Print Alphabets
 *
 * Return: on Success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
