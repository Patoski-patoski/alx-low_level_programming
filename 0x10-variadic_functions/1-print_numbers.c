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

	unsigned int i, num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num ? num : 0);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
