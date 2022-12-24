#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: the string
 *
 * Return: a pointer to the result
 */

char *cap_string(char *str)
{
	int i;
	int j;
	int b;
	char *delim = " \t\n,;.!?\"(){}";

	for (i = 0; i < strlen(str); i++)
	{
		b = 0;
		for (j = 0; j < strlen(delim); j++)
		{
			if (str[i] == delim[j])
				b = 1;
		}

		if (b == 1)
		{
			if (str[i + 1] >= 'a' && str[i +1] <= 'z')
				str[i + 1] = str[i + 1] - 32;

		}
	}

	return (str);
}
