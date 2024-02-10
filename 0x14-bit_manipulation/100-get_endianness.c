#include "main.h"

/**
 * get_endianness - check the endianness
 *
 * Return: 0, if endian is large, 1 if endian is small
 */

int get_endianness(void)
{
	unsigned int m;
	char *c;

	m = 1;
	c = (char *) &m;

	return ((int)*c);
}
