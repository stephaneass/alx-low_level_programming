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
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
			dest[j] = src[j];
	}

	while(j < n)
		dest[j++] = '\0';

	return (dest);
}
