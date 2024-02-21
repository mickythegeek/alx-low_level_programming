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
	ssize_t bytes_written;

	if (!filename)
		return (0);

	fd = open(filename, O_CREAT | O_RDONLY | O_TRUNC, 0600);
	text_content = "God, when?";
	bytes_written = write(fd, text_content, strlen(text_content));

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * strlen((text_content) + 1));

	if (!buf)
		return (0);
	nwr = write(STDOUT_FILENO, buf, bytes_written);

	close(fd);

	free(buf);

	return (nwr);

}
