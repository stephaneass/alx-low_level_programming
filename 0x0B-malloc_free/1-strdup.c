#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * @str: the string
 *
 * Return: a pointer to a newly allocated space
 */
char *_strdup(char *str)
{
	unsigned int len;
	char *ar;
	unsigned int i;

	len = strlen(str);

	if (str == NULL)
		return (NULL);
	ar = malloc(sizeof(char) * len);

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ar[i] = str[i];
	}

	return (ar);
}
