#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: The name of the file to create
 * @text_content:a NULL terminated string to write to the file
 *
 * Return: on success, 1, on failure -1
 **/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byte_written;
	size_t len;

	len = sizeof(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	byte_written = write(fd, text_content, len);
	if (byte_written == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
