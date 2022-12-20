#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: param that points to
 * Return: length of a string
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *(s + count) != '\0'; ++count)
		;

	return (count);
}
