#include "main.h"

/**
 * create_array - creates an array of chars: initializes it to a specific char
 * @size : parameter 1: unsigned int size of array
 * @c : parameter2: to create an array of "c" charater
 *
 * Return: Pointer to string
 **/

char *create_array(unsigned int size, char c)
{
	char *stringPtr = NULL;
	unsigned int i;

	stringPtr = malloc((sizeof(c)) * size);

	if (stringPtr == NULL)
		return (NULL);

	if (size <= 0)
		return (0);

	for (i = 0; i < size; i++)
		stringPtr[i] = c;

	return (stringPtr);

}
