#include "main.h"
#include <string.h>

/**
 * _strncpy - function that copies a string
 * @dest: first param
 * @src: second param
 * @n: number of carater to copy
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = strlen(dest);

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
		if (src[j] == '\0')
			j = n;
	}

	return (dest);
}
