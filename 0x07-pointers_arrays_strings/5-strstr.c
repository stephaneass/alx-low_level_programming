#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: initial data
 * @needle: data to search
 *
 * Return: a pointer to the byte
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return ('\0');
}
