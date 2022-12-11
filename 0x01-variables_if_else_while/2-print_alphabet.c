#include <stdio.h>

/**
 * main - Enter point
 * Description: prints the alphabet in lowercase,
 * Return: 0 always (success)
 */
int main(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
}
