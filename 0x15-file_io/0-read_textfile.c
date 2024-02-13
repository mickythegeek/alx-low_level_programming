#include <stdio.h>
#include "main.h"

/**
 * read_textfile - function that reads a text_file and prints to POSIX stdout
 * @letters: num of letters it should read and print
 * @filename: text file to read and print from
 *
 * Return: unsigned int
 */

ssize_t read_file(const char *filename, size_t letters)
{
	unsigned int u_int;
	
