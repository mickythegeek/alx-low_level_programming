#include "main.h"

/**
 * print_line - outputs a straight line n times
 * @n: number of times a straight line is prnted
 * Return: no return
 */

void print_line(n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
