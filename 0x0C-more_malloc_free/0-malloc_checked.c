#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b : unsigned int, size of pointer
 *
 * Return: pointer to allocated memory
 **/

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	if (b <= 0)
		return (NULL);

	ptr = malloc(sizeof(ptr) * b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
