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
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;

	return (ptr);
}
