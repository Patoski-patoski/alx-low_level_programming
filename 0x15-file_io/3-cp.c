#include "main.h"

/**
 * main - check the code. Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Success
 **/

int main(int argc, char **argv)
{
	const char *file_to, *file_from;

	file_from = argv[1];
	file_to = argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to,\n");
		exit(97);
	}
	copy_file(file_from, file_to);
	return (0);
}

/**
 * copy_file - a function that copies data from one file to another
 * @file_from: file to read dta for copying
 * @file_to: file to write data to
 *
 * Return: Nothing
 **/

int copy_file(const char *file_from, const char *file_to)
{
	int fd, fd2;
	char buffer[1024];
	ssize_t byte_read, byte_written;

	fd2 = open(file_from, O_RDONLY, 0);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	byte_read = read(fd2, buffer, sizeof(buffer));
	if (byte_read <= 0)
	{
		close(fd2);
		return (-1);
	}
	byte_written = write(fd, buffer, _strlen(buffer));
	if (byte_written <= 0)
	{
		close(fd2);
		return(-1);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
		exit(100);
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
