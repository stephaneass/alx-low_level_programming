#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size
 *
 * Return:  pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *res;

	res = malloc(b);

	if (res == NULL)
		exit(98);
	
	return (res);
}
