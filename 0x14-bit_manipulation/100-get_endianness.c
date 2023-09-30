#include "main.h"

/**
 * get_endianness -a function that checks the endianness
 *
 * Return: Nothing
 **/

int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *)&i;

	if (*c)
		return (1);

	return (0);
}
