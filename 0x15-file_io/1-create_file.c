#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1, if successful, -1 if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, o_CREAT | O_RDONLY | O_TRUNC, 0600);
	text_content = "God, when?";
	ssize_t bytes_written = write(fd, text_content, strlen(text_content));

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (text_content));

	if (!buf)
		return (0);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);

}
