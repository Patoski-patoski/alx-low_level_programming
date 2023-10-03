#include "main.h"

/**
 * read_textfile - Write a function that reads a text file and 
 * prints it to the POSIX standard output.
 *
 * @filename: text file
 * @letters: the number of letters it should read and print
 *
 * Return : the actual number of letters it could read and print
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
		return (-1);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (-1);

	byte_read = read(fd, buffer, letters);
	if (byte_read == -1)
	{
		perror("Unable to read");
		return (0);
	}

	byte_written = write(STDOUT_FILENO, buffer, letters);
	if (byte_written == -1)
	{
		perror("Unable to write");
		return (-1);
	}
	free(buffer);
	return (byte_read);
}
