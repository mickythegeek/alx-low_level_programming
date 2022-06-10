#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry Point
 *
 * letter - For alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
			continue;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
