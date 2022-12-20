#include "main.h"
#include <string.h>

/**
 * put2 - reverses a string
 * @str: param that points to
 * Return: anything
 */

void puts2(char *str)
{
	int count;
	int lenght = strlen(str);

	for (count = 0; count < lenght; count+=2)
	{
		if (*(str + count) != '\0')
		{
			_putchar(*(str + count));
		}
	}
}
