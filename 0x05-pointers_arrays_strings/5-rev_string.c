#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: param that points to
 * Return: anything
 */

void rev_string(char *s)
{
	int count;
	int lenght = strlen(s);
	char c;

	for (count = 0; count < lenght / 2; count++)
	{
		if (*(s + count) != '\0')
		{
			c = *(s + count);
			*(s + count) = *(s + (lenght - 1));
			*(s + (lenght - 1)) = c;
		}
	}
}
