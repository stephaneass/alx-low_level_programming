#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Enter point
 * @array: the array
 * @size: the array's size
 * @action: the function pointe to
 *
 * Return: anything
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size < 1 || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
