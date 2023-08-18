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

	if (n <= 0)
		return;

	va_start(my_args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(my_args, char *);
		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (i < (n - 1))
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		va_end(my_args);
	}
	printf("\n");
}
