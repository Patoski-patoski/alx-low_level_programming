#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output.
 *
 * @filename: the name of textfile to open
 * @letters: the number of letters it should read and print
 *
 *  Return: the actual number of letters it could read and print
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t byte_read, byte_written;
	char *buffer;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	byte_read = read(fd, buffer, letters);
	if (byte_read == -1 || byte_read == 0)
	{
		free(buffer);
		return (0);
	}

	close(fd);

	byte_written = write(STDOUT_FILENO, buffer, letters);
	if (byte_written == -1 || byte_written == 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (byte_read);
}

