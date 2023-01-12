#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arg
 * @av: arg value
 *
 * Return: the concatenation
 */
char *argstostr(int ac, char **av)
{
	int i, j, count, index;
	char *concat;

	if (ac <= 0 || av == NULL)
		return (NULL);

	count = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			count++;
	}

	concat = malloc(sizeof(char) * count + ac + 1);

	index = 0;
	for (i = 0; i  < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concat[index++] = av[i][j];
		}
		concat[index++] = '\n';
	}

	return (concat);
}
