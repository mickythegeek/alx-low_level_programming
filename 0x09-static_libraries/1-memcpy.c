#include "main.h"
/**
 * _memcpy - copies contents of memory
 * @dest: copy destination
 * @src: memory source
 * @n: number of objects to copy
 * Return: Memory content
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
