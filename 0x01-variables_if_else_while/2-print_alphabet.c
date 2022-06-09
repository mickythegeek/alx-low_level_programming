#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * @ch: Character to be written
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'A';

	for (ch = 'A'; ch <= 'Z'; ch++)
		printf(tolower(ch));
}
