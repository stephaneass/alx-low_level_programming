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

	/*for (n = 0; (dest[i + n] = *src++) != '\0'; n++);*/
	for (j = 0; j < n; j++)
		dest[i + j] = src[j];

	return (dest);
}
