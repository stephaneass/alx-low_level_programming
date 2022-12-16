#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times to print \
 *
 * Return: anything
 */

void print_diagonal(int n)
{
	int i, j;

	if (n >= 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 2; j <= i; j++)
				_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
