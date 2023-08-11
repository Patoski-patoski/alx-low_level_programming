#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of element in the array
 * @size: size of the array
 *
 * Return: malloc pointer
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = 0;

	return (ptr);
}

