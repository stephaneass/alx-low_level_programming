#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: initial data
 * @accept: data to search
 *
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return ("\0");
}
