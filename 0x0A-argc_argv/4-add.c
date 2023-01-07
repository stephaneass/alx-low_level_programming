#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entery point
 * @argc: number of params
 * @argv: params vertor
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	printf("%d\n", sum);
	return (0);
}
