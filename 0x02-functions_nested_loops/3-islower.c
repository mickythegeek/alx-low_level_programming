#include "main.h"
/**
 * _islower - Function that checks for lowercase character
 *
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	if (c <= 122)
		return 1;
	else
		return 0;
}
