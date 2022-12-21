#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: first param
 * @src: second param
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; i < strlen(src); i++)
	{
		dest[strlen(dest) + i] = *src[i];
	}

	return (dest);
}
