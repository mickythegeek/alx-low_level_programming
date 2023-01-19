#include "main.h"

/**
 * print_diagonal -outputs a diagonal line a number of times
 * @n: number of times a diagonal line appears on the terminal
 * Return: No return
 */
void print_diagonal(int n)
{
	int x, y;

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
