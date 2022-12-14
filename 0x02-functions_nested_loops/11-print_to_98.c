#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to start for
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i % 10 + '0');
			if (i != 98)
			{
				printf("%d ,", i);
			}
			else
			{
				_putchar('9');
				_putchar('8');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if(i != 98)
			{
				printf("%d ,", i);
			}
			else
			{
				_putchar('9');
				_putchar('8');
			}
		}
	}
	printf("\n");
}
