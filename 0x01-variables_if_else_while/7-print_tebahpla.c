#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry Point
 *
 * letter - Represents characters from the alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
