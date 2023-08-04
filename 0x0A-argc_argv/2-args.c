#include <stdio.h>

/**
 * main - main function
 * @argc: the argument count
 * @argv: the argument vectors
 *
 * Return: 0 success
 *
 **/

int main(int argc, char **argv)
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
