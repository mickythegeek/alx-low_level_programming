#include "main.h"
/**
 * print_last_digit - Function that prints the last digit of a number
 *
 * @n: placeholder for the number
 *
 *@last_digit: placeholder for the last digit
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	return (last_digit);
}
