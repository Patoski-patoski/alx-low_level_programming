#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked -  function that allocates memory using malloc
 * @b: size of pointer
 *
 * Return: malloc Pointer
 **/

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	if (b <= 0)
		return (98);

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
