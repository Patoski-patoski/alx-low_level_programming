#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: he string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(my_args);
	unsigned int i;
	char *str;

	va_start(my_args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(my_args, char *);

		str == NULL ? printf("(nil)") : printf("%s", str);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	va_end(my_args);
	printf("\n");
}
