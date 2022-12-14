#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the times table
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, r;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			if (n != 0)
				_putchar(',');
			for (j = 1; j <= n; j++)
			{
				_putchar(' ');
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
					if (i * j < 100)
						_putchar(' ');
					r = i * j;
					if (r > 99)
					{
						_putchar((r / 100) + '0');
						r = r % 100;
					}
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
					if (j < n)
						_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
