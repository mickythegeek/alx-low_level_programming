#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry Point
 *
 * @ch: Character to be written
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'A';
	int lower_case;

	for (ch = 'A'; ch <= 'Z'; ch++)
		lower_case = (tolower(ch));
		printf("%d", lower_case);
}	
