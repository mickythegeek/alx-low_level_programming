#include "main.h"
/**
 * rev_string - reverses a strng
 * @s: given string
 */
void rev_string(char *s)
{
	int x = 0;
	int z = 0;
	char *tmp = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}
	*tmp = *s;
	while (x != 0)
	{
		*(s + z) = *(tmp + x);
		x--;
		z++;
	}
}
