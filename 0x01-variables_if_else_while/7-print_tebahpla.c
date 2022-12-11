#include <stdio.h>

/**
 * main - Enter point
 * Description: Smile in the mirror
 * Return: 0 always (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
