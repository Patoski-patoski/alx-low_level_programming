#include "main.h"

/**
 * read_textfile - Write a function that reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: text file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t byte_read, byte_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (-1);
	}

	byte_read = read(fd, buffer, letters);
	if (byte_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	byte_written = write(STDOUT_FILENO, buffer, byte_read);
	if (byte_written == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	if (byte_written != byte_read)
		return (0);

	free(buffer);
	close(fd);
	return (byte_read);
}
