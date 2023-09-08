#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the text to be appended
 *
 * Return: 1 on success
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res;
	size_t byte_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	byte_written = write(fd, text_content, _strlen(text_content));

	if (byte_written <= 0)
		return (-1);

	res = close(fd);
	if (res == -1)
		return (-1);

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

