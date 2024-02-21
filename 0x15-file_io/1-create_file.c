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
	int nletters;
	int bytes_written;

	if (!filename)
			return (-1);

	fd = open(filename, O_CREAT | O_RDONLY | O_TRUNC, 0600);

	if (fd == -1)
			return (-1);

	if (!text_content)
			text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
			;

	bytes_written = write(fd, text_content, nletters);

	if (bytes_written == -1)
			return (-1);


	close(fd);


	return (1);

}
