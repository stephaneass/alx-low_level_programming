#include <stdio.h>

/**
 * main - Enter point
 * Description: Print string without printf and puts
 * Return: 1 means everything is okay
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	unsigned long i = 0;

	while (sizeof(text) > i)
	{
		putchar(text[i]);
		i++;
	}
	return (1);
}
