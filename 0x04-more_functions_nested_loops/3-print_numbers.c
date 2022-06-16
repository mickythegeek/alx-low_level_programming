#include "main.h"

/**
 * print_numbers - Function that prints the numbers from 0 to 9
 *
 * Return: No return
 */
void print_numbers(void)
{
	char c = '0';
	
	for (; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
