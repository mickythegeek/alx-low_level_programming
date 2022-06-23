#include "main.h"
/**
 * puts_half -- prints half of a string 
 * @str: given string
 */
void puts_half(char *str)
{
	int x = 0;
	int y;

	while (*(str + x) != 0)
	{
		x++;
	}
	if (x % 2 == 0)
		y = x / 2;
	else
		y = (x + 1) / 2;
	while (y <= (x - 1))
	{
		_putchar(*(str + y));
		y++;
	}
	_putchar('\n');
}
