#include "main.h"

/**
 * strlen_recursion -  ints a string in reverse
 * @s: string to print
 *
 * Return: anything
 */
int _strlen_recursion(char *s)
{

	int result;

	result = 0;
	if (*s != '\0')
	{
		result = 1 + _strlen_recursion(s + 1) ;
	}
	return (result);
}
