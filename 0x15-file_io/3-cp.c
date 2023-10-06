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

	err_sys_call(byte_read, argv[1], buffer);

	byte_written = write(file_to, buffer, byte_read);

	err_sys_call(byte_written, argv[2], buffer);

	close_error_msg(file_from);
	close_error_msg(file_to);
	free(buffer);

	return (0);
}
/**
 * close_error_msg - a function that checks for error message when closing fd
 * @fd: file descriptor
 *
 * Return: Nothing
 **/
void close_error_msg(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
}
/**
 * err_sys_call - a function that checks for system calls eror and frees malloc
 * @bytes: the return value of the system call
 * @argv: a pointer to string
 * @buffer: block of dynamic allocated memory
 *
 * Return: Nothing
 **/
void err_sys_call(ssize_t bytes, char *argv, char *buffer)
{
	if (bytes  == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv);
	}
}
