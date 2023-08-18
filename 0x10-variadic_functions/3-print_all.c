#include "variadic_functions.h"

/**
 * print_all -  function that prints anything.
 * @format:  is a list of types of arguments passed to the function
 *
 * Return: Nothing
 **/

void print_all(const char * const format, ...)
{
	va_list args;

	char c;
	int i, j;
	char *s;
	float f;

	va_start(args, format);

	j = 0;
	while (format[j])
	{
		if (format[j] == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (format[j] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (format[j] == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (format[j] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			printf("%s", s);
		}
		j++;
	}
	printf("\n");
}

