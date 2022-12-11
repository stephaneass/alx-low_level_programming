#include <stdio.h>

/**
 * main - Enter point
 * Description: Smile in the mirror
 * Return: 0 always (success)
 */
int main(void)
{
	int ch;

	for (ch = 122; ch >= 97; ch--)
	{
		putchar("%c", ch);
	}
	putchar('\n');
	return (0);
}
