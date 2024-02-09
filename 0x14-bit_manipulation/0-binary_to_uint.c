#include "main.h"

/**
 * binary_to_uint - Function that converts a binary num to an
 * unsigned int
 * @b - binary num
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int u_int;
	int len, base_2;

	if(!b)
		return (0);
	
	u_int = 0;

	for (len = 0; b[len] = '\0'; len++)
		;

	for (len--, base_2 = 1; len >= 0; len--, base_2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			u_int += base_2;
		}
	}

	return (u_int);
}
