#include <stdio.h>

/**
 * main - Enter point
 * Description: Hexadecimal
 * Return: 0 always (success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
