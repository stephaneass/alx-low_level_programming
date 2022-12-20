#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: param that points to
 * Return: anything
 */

void puts_half(char *str)
{
	int count;
	int lenght = strlen(str);

	for (count = lenght / 2; count < lenght; count += 2)
	{
		if (*(str + count) != '\0')
		{
			_putchar(*(str + count));
		}
	}
	_putchar('\n');
}
