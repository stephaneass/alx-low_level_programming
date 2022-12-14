#include <stdio.h>
#include "main.h"

/**
 * main - Entre point
 * Return: 0 always success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	char l[8] = "_putchar";
	int i;
	for (i = 0; i < 8; i++)
	{
		_putchar(l[i]);
	}
	putchar('\n');
	return (0);
}
