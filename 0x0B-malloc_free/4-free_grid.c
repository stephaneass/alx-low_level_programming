#include "main.h"
#include <stdlib.h>

/**
 * free_grid - returns a pointer to a newly allocated
 * @grid: the array with 2 dimensional
 * @height: the height
 *
 * Return: a pointer to a 2 dimensional array of integers
 */
void free_grid(int **grid, int height)
{
	int i, j, **ar;

	if (grid != NULL && height > 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
