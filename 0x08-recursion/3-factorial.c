#include "main.h"

/**
 * factorial - returns the facorial of a given number
 *
 * @n: parameter of given number
 * Return: factorial
 */


int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (n * factorial(n - 1));

}
