#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial data
 * @accept: data to search
 *
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != "\0"; i++)
	{
		for (j = 0; accept[j] != "\0"; j++)
		{
			if (s[i] == accept[j])
			{
				i++;
				break;
			}
		}
	}

	return (i);
}
