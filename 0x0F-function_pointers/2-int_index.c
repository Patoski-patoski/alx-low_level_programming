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
	int i, value;

	if (size <= 0 || !array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			value = i;
			break;
		}
		else
			value =  -1;
	}
	return (value);
}
