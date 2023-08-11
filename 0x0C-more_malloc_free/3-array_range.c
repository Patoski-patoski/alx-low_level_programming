#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: minmum range
 * @max: maximum range
 *
 * Return: pointer to malloc
 **/

int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(ptr) * max);

	if (ptr == NULL)
		return (NULL);

	for (i = min; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
