#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a newline
 * @s: given string
 */
void print_rev(char *s)
{
	int y;
	int x = 0;

	while (s[x] != 0)
	{
		x++;
	}

	y = x - 1;
	while ( y >= 0)
	{
		_putchar(s[y]);
		y--;
	}
	_putchar('\n');
}
