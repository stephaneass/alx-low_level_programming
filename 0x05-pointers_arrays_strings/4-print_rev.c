#include "main.h"

/**
 * print_rev -Prints a string in reverse
 * @s: param that points to
 * Return: anything
 */

void print_rev(char *s)
{
	int count;

	for (count = count(*s); count > 0; --count)
	{
		if (*(s + count) != '\0')
			_putchar(*(s + count));
	}
	_putchar('\n');
}
