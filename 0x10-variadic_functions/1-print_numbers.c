#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: a string to be printed between numbers
 * @n: number of variadic argument
 *
 * Return: Nothing
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(args);

	unsigned int i;

	va_start(args, n);

	if (separator == NULL || n <= 0)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
				if (i < (n - 1))
				printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
