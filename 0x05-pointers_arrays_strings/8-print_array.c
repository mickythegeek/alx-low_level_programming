#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array of integers
 * @a: point to array's address
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int x = 0;
	int i = 0;

	while ((*(a + i) != 0) && x < n)
	{
		printf("%d", a[i]);
		if (x < n -1)
		{
			printf(", ");
		}
		i++;
		x++;
	}
	printf("\n");
}
