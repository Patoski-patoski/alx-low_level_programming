#include "3-calc.h"

/**
 * main - check the code
 * @argc: argument count
 * @argv: arument vector
 *
 * Return: 0 success;
 **/

int main(int argc, char **argv)
{
	int (*operation)(int, int);

	int a;
	int b;

	a = b = 0;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	operation = get_op_func(argv[2]);

	if (!operation)
	{
		puts("Error");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "*") == 0)
		&& atoi(argv[3]) == 0)
	{
		puts("Error");
		exit(100);
	}

	printf("%d\n", operation(a, b));

	return (0);
}
