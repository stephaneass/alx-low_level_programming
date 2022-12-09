#include <stdio.h>

/**
 * main - Enter point
 * Description: Print string without printf and puts
 * Return: 1 means everything is okay
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	unsigned long i = 0;

	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
