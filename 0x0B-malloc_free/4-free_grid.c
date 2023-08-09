#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid- alloc_grid function.
 * @grid: the pointer to pointer to integer to be freed
 * @height: the column of grid
 *
 * Return: Nothing
 **/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
