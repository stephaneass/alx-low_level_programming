#include "main.h"
#include <unistd.h>
#include <string.h>

/**
  * _putchar - writes the character c to stdout
  * @c: The character to print
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */
  
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - checks for lowercase character
 * @c: charactor to check
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

/**
 * _isalpha - checks for lower or upper case character
 * @c: charactor to check
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/**
 * _abs - computes the absolute value of an integer
 * @n: number to compute
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

/**
 * _isupper -check if uppercase
 * @c: the char to check
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{

}

/**
 * _isdigit - check digit
 * @c: the data to check
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{

}

/**
 * _strlen - get string lenght
 * @s: the string
 *
 * Return: the string's lenght
 */
int _strlen(char *s)
{

}

/**
 * _puts - to print
 * @s: the string data
 *
 * Return: anything
 */
void _puts(char *s)
{

}

/**
 * _strcpy - to copy data
 * @dest: buffer pointed
 * @src: source string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	dest = src;

	return (dest);
}

/**
 * _atoi - a toi
 * @s: the string
 *
 * Return: int
 */
int _atoi(char *s)
{

}

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

	i = strlen(dest);

	for (n = 0; (dest[i + n] = *src++) != '\0'; n++);

	return (dest);
}

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
	int i;
	int j;

	i = strlen(dest);

	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			j = n;
	}

	return (dest);
}

/**
 * _strncpy - function that copies a string
 * @dest: first param
 * @src: second param
 * @n: number of carater to copy
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
			dest[j] = src[j];
	}
	while(j < n)
		dest[j++] = '\0';

	return (dest);
}

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
		return (0);
	else
		return (*s1 - *s2);	
}

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

/**
 * _strchr - locates a character in a string
 * @s: address that point to the original string
 * @c: the string to look for
 *
 * Return: pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return ('\0');
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial data
 * @accept: data to search
 *
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
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

/**
 * _strpbrk - Entry point
 * @s: initial data
 * @accept: data to search
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return ('\0');
}

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
