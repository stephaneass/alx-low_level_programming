#include "main.h"
#include <stdlib.h>

/**
 * strtow - Main Entry
 * @str: the string
 *
 * Return: splits of the string into words
 */

char **strtow(char *str)
{
	char **result;
	unsigned int i, j, h, c, height;

	if (str == NULL || *str == '\0')
		return (NULL);

	height = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i] == '\0')
			height++;
	}

	result = malloc((height + 1) * sizeof(char *));

	if (result == NULL || height == 0)
	{
		free(result);
		return (NULL);
	}

	for (i = h = 0; i < height; i++)
	{
		for (c = h; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				h++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				result[i] = malloc((c - h + 2) * sizeof(char));
				if (result[i] == NULL)
				{
					free_grid(result, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; h++, j++)
			result[i][j] = str[h];
		result[i][j] = '\0';
	}
	result[i] = NULL;
	return (result);
}
