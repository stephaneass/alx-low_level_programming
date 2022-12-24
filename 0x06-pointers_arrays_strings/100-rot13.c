#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @stg: the string to be modified
 *
 * Return: modified string
 */

char *rot13(char *stg)
{
	int i;
	int j;
	char *rem = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rep = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; stg[i] != 0; i++)
	{
		for (j = 0; rem[j] != 0; j++)
		{
			if (rem[j] == stg[i])
			{
				stg[i] = rep[j];
				break;
			}
		}
	}
	return (stg);
}
