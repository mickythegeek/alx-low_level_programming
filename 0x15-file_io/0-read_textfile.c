#include <stdio.h>
#include "main.h"

/**
 * read_textfile - function that reads a text_file and prints to POSIX stdout
 * @letters: num of letters it should read and print
 * @filename: text file to read and print from
 *
 * Return: unsigned int
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (!buf)
		return (0);
	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);

}
