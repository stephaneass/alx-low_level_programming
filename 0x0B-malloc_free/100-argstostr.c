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
	int i, count, *concat;
	char str;

	if (ac <= 0 || av == NULL)
		return (NULL);

	count = 0;

	for (i = 0; i < ac; i++)
	{
		str = av[i];
		while (str != '\0')
			count++;
	}

	concat = malloc(sizeof(char) * count + ac);

	index = 0;
	for (i = 0; i  < ac; i++)
	{
		str = av[i];
		while (str != '\0')
		{
			concat[index++] = str++;
		}
		concat[index++] = '\n';
	}
}
