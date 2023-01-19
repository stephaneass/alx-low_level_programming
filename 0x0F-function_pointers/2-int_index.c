#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: the array's size
 * @cmp: the callback
 *
 * Return: return the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		index = cmp(array[i]);
		if (index != 0)
			return (i);
	}
	return (-1);
}
