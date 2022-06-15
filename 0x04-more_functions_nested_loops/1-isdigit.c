#include "main.h"

/**
 * _isdigit - Checks for a digit
 *
 * @c: input character
 *
 * Return: 1, if c is digit. 0, if c is not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
