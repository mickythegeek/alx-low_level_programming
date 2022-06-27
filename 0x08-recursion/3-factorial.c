#include "main.h"
/**
 * factorial - return the factorial of a given number
 * @n: given number
 * Return: the factorial final result
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
