#include "main.h"

/**
 * print_diagonal -outputs a diagonal line a number of times
 * @n: number of times a diagonal line appears on the terminal
 * Return: No return
 */
void print_diagonal(int n)
{
	int x, y;

	for(x = 0; x < n; x++)
	{
		for(y = 0; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (x < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
