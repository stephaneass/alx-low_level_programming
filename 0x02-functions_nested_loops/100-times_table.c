#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the times table
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (0 <= n && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			_putchar(',');
			for (j = 1; j <= n; j++)
			{
				if (i * j < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((i * j) + '0');
					if (j < n)
						_putchar(',');
				}
				else
				{
					_putchar(' ');
					_putchar((i * j / 10) + '0');
					_putchar(((i * j) % 10) + '0');
					if (j < n)
						_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
