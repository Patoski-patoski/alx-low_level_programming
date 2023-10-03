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
	int fd, len;
	ssize_t byte_written;

	len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	else
	{
		byte_written = write(fd, text_content, len);
		if (byte_written == -1)
		{
			close(fd);
			return (-1);
		}
		close(fd);
		return (1);
	}
}

/**
 * _strlen - get the length of a string
 * @str: the nul terminated string
 *
 * Return: Length of string
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

