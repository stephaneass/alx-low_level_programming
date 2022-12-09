#include <stdio.h>

/**
 * main - Enter point
 * Description: Print string without printf and puts
 * Return 1
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;
	          
	while(sizeof(text) > i)
	{
		putchar(text[i]);
	}
	return (1);
}
