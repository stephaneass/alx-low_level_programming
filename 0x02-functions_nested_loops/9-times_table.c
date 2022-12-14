#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 1; j < 9; j++)
		{
			if (i * j < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((i* j) + '0');
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar((i* j) + '0');
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
