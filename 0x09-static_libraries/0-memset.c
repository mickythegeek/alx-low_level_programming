#include "main.h"
/**
 * _memset - write to memory
 * @s: memory location
 * @b: constant byte to write
 * @n: number of memory bytes to modify
 * Return: Memory contents
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		*(s + i) = b;
	return (s);
}
