#include "main.h"
/**
 * print_times_table - function that prints the n times table,
 * starting with 0.
 *
 * @n: number times table where 0 < n < 15
 */
void print_times_table(int n)
{
	int a, b, mult_op;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= 15; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				mult_op = a * b;
				_putchar(44);
				_putchar(32);
				if (mult_op <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(mult_op + 48);
				}
				else if (mult_op <= 99)
				{
					_putchar(32);
					_putchar((mult_op / 10) + 48);
					_putchar((mult_op % 10) + 48);
				}
				else
				{
					_putchar(((mult_op / 100) % 10) + 48);
					_putchar(((mult_op / 10) % 10) + 48);
					_putchar((mult_o % 10) + 48);
				}
			}
			_putchar('\n');
		}

	}
}
