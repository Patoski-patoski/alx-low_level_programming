#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: the width of the array
 * @height: the heiht of the array
 *
 * Return: pointer to alloc_grid
 **/

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(width * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		ptr[i] = malloc(height * sizeof(int));

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);

			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}

