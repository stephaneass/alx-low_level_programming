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
	char *ar;
	unsigned int i = 0;

	if (size <= 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
