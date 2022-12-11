#include <stdio.h>

/**
 * main - Enter point
 * Descriiption: prints the alphABET
 * Return: 0 always (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)                                                                      
		putchar(ch);
	putchar('\n');
	return (0);
}
