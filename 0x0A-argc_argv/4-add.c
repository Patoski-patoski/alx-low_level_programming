#include <stdlib.h>
#include <stdio.h>

/**
 * isdigit - a function that checks if a parameter is a digit(0-9)
 * @c: integer parameter
 *
 * Return: 1 success
 **/

int isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}


/**
 * main - main function
 * @argc: the argument count
 * @argv: the argument vectors
 *
 * Return: name of the argv
 *
 **/

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (!isdigit(argv[i][j]))
				return (1);

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
