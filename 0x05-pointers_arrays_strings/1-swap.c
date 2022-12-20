#include "main.h"

/**
 * swap_int swaps the values of two integers
 * @a: param that points to first int
 * @b: param that points to second int
 * Return: anything
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
