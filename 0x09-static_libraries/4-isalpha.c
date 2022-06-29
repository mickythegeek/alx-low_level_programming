#include "main.h"
/**
 * _isalpha - Checks is a character is a letter, lowercase or uppercase
 *
 * @c: Character to be checked
 *
 * Return: 1, if true. 0, if false
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
