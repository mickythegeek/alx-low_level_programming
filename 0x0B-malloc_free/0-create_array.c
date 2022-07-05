#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - makes an array of dynamic memory
 * @size: size of array
 * @c: arg to initialze first index with
 * Return: Pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	while (1)
	{
		p = malloc(sizeof(char) * size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		if (size == 0)
			return (NULL);
		return (p);

	}
}
