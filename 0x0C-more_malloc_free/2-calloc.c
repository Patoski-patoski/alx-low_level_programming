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
	void *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	my_memset(ptr, 0, nmemb);

	return (ptr);
}

/**
 * my_memset - function to initialize memory using pointer
 * @ptr: pointer to void(to be casted)
 * @value: number to be initialized-to
 * @num: size of object/element/array
 *
 * Return: pointer to malloc
 **/

void *my_memset(void *ptr, int value, unsigned int num)
{
	unsigned char *cptr = ptr;
	unsigned int i;

	for (i = 0; i < num; i++)
		cptr[i] = (unsigned char)value;

	return (cptr);
}
