#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all lowercase to uppercase
 * @str: the string
 *
 * Return: a pointer to the result
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = toupper(str[i]);
	}
}
