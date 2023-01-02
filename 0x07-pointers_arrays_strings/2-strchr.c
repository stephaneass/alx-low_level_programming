#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: address that point to the original string
 * @c: the string to look for
 *
 * Return: pointer to the first occurrence of the character 
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (NULL);
}
