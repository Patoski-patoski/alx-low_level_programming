#include "main.h"

/**
 * get_bit- a function that returns the value of a bit at a given index.
 * @n: the number
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long l_shift, and;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	l_shift = 1 << index;
	and = n & l_shift;
	if (and == l_shift)
		return (1);
	return (0);
}
