#include "main.h"
#include <stdio.h>

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
		printf("%d", a[count]);
		if (count < n - 1)
			printf(", ");
	}
printf('\n');
}
