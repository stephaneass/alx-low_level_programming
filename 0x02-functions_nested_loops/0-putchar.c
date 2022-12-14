#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Entre point
 * Return: 0 always success
 */

int main(void)
{
	char l[8] = "_putchar";
	int i;
	for (i = 0; i < 8; i++)
	{
		_putchar(l[i]);
	}
	_putchar('\n');
	return (0);
}
