#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success
 **/

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t byte_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	close(fd);

	byte_written = write(fd, text_content, _strlen(text_content));

	if (byte_written <= 0)
	{
		close(fd);
		return (-1);
	}

	return (1);
}

/**
 * _strlen - a function to find the length of a string
 * @str: the string
 *
 * Return: length of string
 **/

int _strlen(char *str)
{
	int len;

	len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	return (len);
}

