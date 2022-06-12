#include <unistd.h>

/**
 * _putchar - Writes a character to output
 *
 * Return: On Success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
