#include "main.h"

/**
 * print_square - outputs a square with given size
 * @size: size of the square to be printed
 * Return: No return
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		if (i != size - i)
			_putchar('\n');
	}
	_putchar('\n');
}
