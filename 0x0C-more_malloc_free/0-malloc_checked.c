#include "main.h"

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
		return (NULL);

	ptr = malloc(sizeof(ptr) * b);

	if (ptr == NULL)
		exit (98);

	return (ptr);
}
