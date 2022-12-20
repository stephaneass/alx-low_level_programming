#include "main.h"
#include <string.h>
#include <math.h>

/**
 * print_array - prints half of a string
 * @str: param that points to
 * Return: anything
 */

void print_array(int *a, int n)
{
	int count;
	int lenght = strlen(str);
	int start = (lenght % 2) == 0 ? (lenght / 2) : (lenght / 2) + 1;

	for (count = 0; count < n; count++)
	{
		_putchar(a[count] + '0');
	}
	_putchar('\n');
}
