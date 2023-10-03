#include "main.h"

/**
 * append_text_to_file- a function to append text to a file
 * @filename: the name of the file
 * @text_content: the text to be appended
 *
 * Return: 1 on success, -1 on failure
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t byte_written;

	len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	/* opening the file */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}
	else
	{
		/* writing to the file */
		byte_written = write(fd, text_content, len);
		if (byte_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	return (1);
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
