#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Success
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
