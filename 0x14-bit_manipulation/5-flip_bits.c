#include "main.h"
/**
 * flip_bits - returns any num of its you need to flip
 *
 * @n: first num
 * @m: second num
 *
 * Return: num of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_of_bits;

	for (num_of_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num_of_bits++;
	}

	return (num_of_bits);
}
