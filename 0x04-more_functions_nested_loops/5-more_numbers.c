#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14
 *
 * Return: anything
 */

void more_numbers(void)
{
	int c;

	for (c = 0; c <= 14; c++)
	{
		if (c > 9)
			_putchar((c / 10) + '0');
		_putchar(c % 10 + '0');
	}
	_putchar('\n');
}
