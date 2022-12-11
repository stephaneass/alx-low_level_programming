#include <stdio.h>

/**
 * main - Enter point
 * Description: prints the alphabet in lowercase,
 * Return: 0 always (success)
 */
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
