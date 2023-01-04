#include "main.h"

/**
 * _puts_recursion - prints a string with a new line
 * @s: string to print
 *
 * Return: anything
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
		return;
	_putchar(*s);
	_puts_recursion(s++);
}
