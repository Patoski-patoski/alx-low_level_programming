#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 *
 * @size: The size of the array
 * @action: pointer to void function
 *
 *Return: Nothing
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
