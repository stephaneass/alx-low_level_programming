#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: first param
 * @src: second param
 * @n: number of carater to add
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = strlen(dest);

	for (j = 0; ((dest[i + j] = *src++) != '\0') && (j != n) ; j++);

	return (dest);
}
