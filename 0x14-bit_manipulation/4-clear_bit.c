#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: the bit to set
 * @index: the given index
 *
 * Return: on success 1, error -1
 *
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int mask;

	if (index > sizeof(n) * 8)
		return (-1);

	mask = 1UL << index;
	*n &= ~mask;
	return (1);
}
