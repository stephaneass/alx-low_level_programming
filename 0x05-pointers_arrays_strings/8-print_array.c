#include "main.h"
#include <string.h>
#include <math.h>

/**
 * print_array - prints half of a string
 * @a: param that points to
 * @n: number of item to print
 * Return: anything
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		_putchar(a[count] + '0');
	}
	_putchar('\n');
}
