#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: address of memory to be filled
 * @b: value to use to fill
 * @n: number of element to change
 *
 * Return: the array with his now value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
