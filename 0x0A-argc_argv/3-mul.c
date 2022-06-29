#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: arg counts
 * @argv: arg vector
 * Return: Success or Error
 */
int main(int argc, char **argv)
{
	int c;
	int y;

	if (argc < 3)
	{
		y = 0;
		printf("Error\n");
		c = 1;
	}
	else
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		y = a * b;
		printf("%d\n", y);
		c = 0;
	}
	return (c);
}
