#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 *
 * @i: Integer to be used
 *
 * Return: Absolute value
 */
int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	else
		return (i);
}
