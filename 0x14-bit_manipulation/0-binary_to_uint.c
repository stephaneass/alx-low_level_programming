#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: the pointer to the string to comvert
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		res <<= 1;
		res += b[i] - '0';
		i++;
	}

	return (res);
}
