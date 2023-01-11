#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * str_concat - returns a pointer to a newly allocated
 * @s1: the first string
 * @s2: theb second tring
 *
 * Return: a pointer to a newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len;
	char *ar;
	unsigned int i;

	len = strlen(str);

	if (str == NULL)
		return (NULL);
	ar = malloc(sizeof(char) * (len + 1));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		ar[i] = str[i];
	}
	ar[len] = '\0';
	return (ar);
}
