#include "main.h"
#include <string.h>

/**
 * _strcmp - function that copies a string
 * @dest: first param
 * @src: second param
 *
 * Return: a pointer to the resulting string dest
 */

int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);	
	}
}
