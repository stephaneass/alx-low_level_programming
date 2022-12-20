#include "main.h"

/**
 * _puts -Prints a string
 * @str: param that points to
 * Return: anything
 */

void _puts(char *str)
{
	int count;

	for (count = 0; *(str + count) != '\0'; ++count)
		_putchar(*(str + count));
	_putchar('\n');
}
