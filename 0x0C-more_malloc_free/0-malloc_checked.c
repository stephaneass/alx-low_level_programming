#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: the size
 *
 * Return:  pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);
	if (result == NULL)
		exit(98);
	return (result);
}
