#include "main.h"

/**
 * _isupper - Checks for uppercase character
 *
 * @c: Input character
 *
 * Return: 1, if Uppercase. 0, if not.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
