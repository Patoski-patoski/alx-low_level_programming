#include "main.h"

/**
 * main - The main entry to the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Nothing
 **/

int main(int argc, char **argv)
{
	ssize_t byte_written, byte_read;
	int file_from, file_to;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		return (-1);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		return (-1);

	buffer = malloc(1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		return (-1);
	}

	byte_read = read(file_from, buffer, 1024);
	if (byte_read == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	byte_written = write(file_to, buffer, byte_read);
	if (byte_written == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	free(buffer);
	return (0);
}
