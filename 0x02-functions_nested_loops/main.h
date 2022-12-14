#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

int _putchar(char c);

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

#endif
