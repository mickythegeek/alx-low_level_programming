#include "main.h"
/**
 * times_table - prints the 9 times table starting from 0
 *
 * Return: No return
 */
void times_table(void)
{
	int i, j, mult_op;

	for (i = 0; i < 9; i++)
	{
		_putchar(48);
		for (j = 1; j < 9; j++)
		{
			mult_op = i * j;
			_putchar(44);
			_putchar(32);
			if (mult_op <= 9)
			{
				_putchar(32);
				_putchar(mult_op + 48);
			}
			else
			{
				_putchar((mult_op / 10) + 48);
				_putchar((mult_op % 10) + 48);
			}
		}
		_putchar('\n');
	}
}

