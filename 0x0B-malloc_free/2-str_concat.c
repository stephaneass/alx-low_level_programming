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
	unsigned int len1, len2;
	char *ar;
	unsigned int i;

	len1 = strlen(s1);
	len2 = strlen(s2)

	if (s1 == NULL)
		len1 = 0;
	if (s2 == NULL)
		len2 = 0;

	if

	ar = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ar[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		ar[i] = s2[i]
	}
	ar[len] = '\0';
	return (ar);
}
