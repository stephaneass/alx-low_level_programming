#include <stdio.h>
#include <string.h>
/**
 * main - Enter point
 * Description: prints all possible combination
 * Return: 0 always (success)
 */
int main(void)
{
	int i;
	int j;
	int find;
	int c;
	int count = 0;
	int list[100];

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; i++)
		{
			if (i == j)
				continue;
			find = 0;
			for (c = 0; c < 100; c++)
			{
				if (list[c] == (i + '0') + (j + '0'))
					find = 1;
			}
			if (find == 1)
				continue;
			list[i] = (i + '0') + (j + '0');
			count++;
		}
	}
	putchar(count);
	for (c = 0; c < count; c++)
	{
		putchar(list[c]);
		if (c < count - 1)
			continue;
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
