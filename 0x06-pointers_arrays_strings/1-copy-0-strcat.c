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
	int i, n;

	for (i = 0; dest[i] != '\0'; i++);
	for (n = 0; (dest[i + n] = *src++) != '\0'; n++);

	return (dest);
}
