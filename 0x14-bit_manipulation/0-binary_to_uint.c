#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string containin binary
 *
 * Return: the converted number
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, sum;

	if (!b)
		return (0);

	len = _strlength(b);
	sum = 0;

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		sum <<= 1;

		if (b[i] == '1')
			sum++;
	}
	return (sum);
}

/**
 * _strlength - a function to find the lenght of a string
 * @str: string
 *
 * Return: Length of string
 **/

unsigned int _strlength(const char *str)
{
	unsigned int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
