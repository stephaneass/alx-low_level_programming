#include "main.h"

/**
 * leet - encodes a string into classsic 1337speak
 * @str: string to modify
 *
 * Return: modified string
 */

char *leet(char *stg)
{
	int i;
	int j;
	char *rem = "aAeEoOtTlL";
	char *rep = "43071";

	for (i = 0; stg[i] != 0; i++)
	{
		for (j = 0; rem[j] != 0; j++)
		{
			if (rem[j] == stg[i])
			{
				stg[i] = rep[(j / 2)];
				break;
			}
		}
	}

	return (stg);
}
