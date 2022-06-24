#include "main.h"
/**
 * reverse_array - reverses the content of an arra of integers
 * @a: array
 * @n: number of elements in the array
 * Return: No return
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tmp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = tmp;
		}
	}
}
