#include "variadic_functions.h"

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n : number of arguments
 *
 * Return:  sum of n
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list(args);
	unsigned int i, sum;

	sum = 0;
	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
