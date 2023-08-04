#include <stdio.h>
#include <stdlib.h>

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
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	printf("%d\n", (atoi)(argv[1]) * (atoi)(argv[2]));

	return (0);
}
