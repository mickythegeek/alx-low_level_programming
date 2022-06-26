#include "main.h"
/**
 * _strpbrk - searches occurence of a string
 * @s: string to search
 * @accept: string to look for
 * Return: pointer to bytes where string is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
