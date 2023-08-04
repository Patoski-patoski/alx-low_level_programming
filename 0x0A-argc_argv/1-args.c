#include <stdio.h>

/**
 * main - main function
 * @argc: the argument count
 * @argv: the argument vectors
 *
 * Return: 0 success
 *
 **/

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	while (i < argc)
	{
		(void)argc;
		sum++;
		i++;
	}

	printf("%d\n", sum++);

	return(0);
}
