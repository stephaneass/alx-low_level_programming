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

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		res <<= 1;
		if (*b != '0' && *b != '1')
			return (0);
		else if (*b == '1')
			res = res | 1;
	}

	return (res);
}
