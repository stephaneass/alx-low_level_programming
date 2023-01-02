#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: address of memory to be filled
 * @src: address fo use to fill
 * @n: number of element to change
 *
 * Return: the array with his now value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}

	return (dest);
}
