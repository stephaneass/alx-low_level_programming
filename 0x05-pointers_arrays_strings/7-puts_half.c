#include "main.h"
#include <string.h>
#include <math.h>

/**
 * puts_half - prints half of a string
 * @str: param that points to
 * Return: anything
 */

void puts_half(char *str)
{
	int count;
	int lenght = strlen(str);
	int start = (lenght % 2) == 0 ? (lenght / 2) : (lenght / 2) + 1;

	for (count = start; count < lenght; count++)
	{
		if (*(str + count) != '\0')
		{
			_putchar(*(str + count));
		}
	}
	_putchar('\n');
}
