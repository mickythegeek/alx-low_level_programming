#include "main.h"
/**
 * clear_bit - sets the value of a bit ti 0 at a given index
 *
 * @n: pointer to an unsigned long int
 * @index: index
 *
 * Return: 1 if success, -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x

	if (index > 63)
		return (-1);

	x = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
