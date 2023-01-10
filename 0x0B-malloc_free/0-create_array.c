#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * @size: the size of array
 * @c: the char
 *
 * Return: a pointer to the array, or NULL
 */
char *create_array(unsigned int size, char c)
{
	if (size <= 0)
		return (NULL);

	char *ar;
	int i = 0;

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return arr;
}
