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
	int list[100];

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; i++)
		{
			if(i == j)
				continue;
			find = 0;
			for (c = 0; c < list.lenght; c++)
			{
				if (list[c] == strcat(i,j))
					find = 1;
			}
			if (find == 1)
				continue;
			list[i] = strcat(i,j);
		}
	}
	for (c = 0; c < list.lenght; c++)
	{
		putchar(list[c]);
		if (c < list.lenght - 1)
			continue;
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
