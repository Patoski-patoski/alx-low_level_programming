#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array to search for integers
 * @size: number of elements in the array
 * @cmp: a pointer to function returning integer data type
 *
 * Return: a pointer to integer function
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
