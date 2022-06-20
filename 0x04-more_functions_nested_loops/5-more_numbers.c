#include "main.h"

/**
 * more_numbers - prints numbers from 0 - 14
 * 10 times
 * Return: No return
 */
void more_numbers(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c >= 10)
				_putchar((c /10) + 48);
			_putchar((c % 10) + 48);
		}
		_putchar('\n');
	}
}
