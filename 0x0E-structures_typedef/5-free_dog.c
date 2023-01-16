#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory
 * @d: the instance to free
 *
 * Return: anything
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
