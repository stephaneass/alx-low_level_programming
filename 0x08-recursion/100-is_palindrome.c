#include "main.h"
#include <string.h>

/**
 * palindrome - compare char
 * @s: the string to check
 * @i: iteration number
 *
 * Return: 0 or 1 if is prime number
 */

int palindrome(char *s, int i, int j)
{
	if (i < j)
	{
		if (s[i] == s[j])
			return (palindrome(s, i, j));
		else
			return (0);
	}
	return (palindrome(s, i - 1, j + 1));
}

/**
 * is_palindrome - check if is palindrome
 * @s: the string to check
 *
 * Return: 0 or 1 if is palindrome
 */
int is_palindrome(char *s)
{
	int l = strlen(s);

	if (l <= 1)
		return (0);

	return (palindrome(s, 0, l-1));
}
