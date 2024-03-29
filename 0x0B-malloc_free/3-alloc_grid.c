#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a newly allocated
 * @width: the width
 * @height: theb height
 *
 * Return: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ar;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(sizeof(int *) * height);

	if (ar == NULL)
		return (NULL);
	/*int* ar[height];*/

	for (i = 0; i < height; i++)
	{
		ar[i] = (int *) malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			while (i >= 0)
				free(ar[i--]);
			free(ar);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ar[i][j] = 0;
	}

	return (ar);
}
